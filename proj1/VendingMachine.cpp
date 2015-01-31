/*
* Vending Machine Project
* CSE-40477
*
* VendingMachine.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include "VendingMachine.h"

Project1::VendingMachine::VendingMachine(
    ostream &statusPanelStream,
    const char *productNames[NUM_PRODUCT_RACKS],
    unsigned productPrices[NUM_PRODUCT_RACKS])
    : statusPanel(statusPanelStream),
        deliveryChute(statusPanel),
        numCoins(0),
        unspentMoneyCents(0)
{
   for (int rack = 0; rack < NUM_PRODUCT_RACKS; ++rack)
   {
      ProductRack *productRack = new ProductRack(statusPanel, 
         productNames[rack], 
         deliveryChute, 
         productPrices[rack]);

      productRacks[rack] = productRack;

      ProductButton *productButton = new ProductButton(*productRack);

      productButtons[rack] = productButton;
   }
}

Project1::VendingMachine::~VendingMachine()
{
   for (int rack = 0; rack < NUM_PRODUCT_RACKS; ++rack)
   {
      delete productRacks[rack];
      delete productButtons[rack];
   }
}

bool
Project1::VendingMachine::insertCoin(Coin *pCoin)
{
   // if it's a valid coin, add it to the coinbox,
   // increment the number of coins in the coinbox,
   // and increment the available spending balance.
   if (pCoin->getValueCents() > 0)
   {
      coinBox[numCoins++] = pCoin;
      unspentMoneyCents += pCoin->getValueCents();
      return true;
   } 
   else
   {
      statusPanel.displayMessage(StatusPanel::MESSAGECODE_BAD_COIN);
      return false;
   }
}

bool
Project1::VendingMachine::pressButton(int button)
{
   // if the button index is invalid, show an error message
   if (button < 0 || button > NUM_PRODUCT_RACKS)
   {
      statusPanel.displayMessage(StatusPanel::MESSAGECODE_WRONG_BUTTON);
      return false;
   }
   else
   {
      ProductButton *productButton = productButtons[button];

      // if the available spending balance is too low, show an error message
      if (unspentMoneyCents < productButton->getProductPriceCents())
      {
         statusPanel.displayMessage(StatusPanel::MESSAGECODE_INSUFFICIENT_MONEY);
         return false;
      }
      else
      {
         // if the product was successfully delivered, reduce the available
         // spending balance by the price of the product delivered.
         if (productButton->press())
         {
            unspentMoneyCents -= productButton->getProductPriceCents();
            return true;
         }
         else
         {
            // something went wrong, so report failure
            return false;
         }
      }
   }
}

Project1::Product *
Project1::VendingMachine::retrieveProduct()
{
   return (deliveryChute.retrieveProduct());
}

bool
Project1::VendingMachine::addProduct(Product *pProduct)
{
   ProductRack **vpRack;

   // loop through the product racks looking for one 
   // compatible with pProduct
   for (int rack = 0; rack < NUM_PRODUCT_RACKS; ++rack)
   {
      // if we find a matching rack, add the product to it
      if (productRacks[rack]->isCompatibleProduct(pProduct->getName()))
      {
         return productRacks[rack]->addProduct(pProduct);
      }
   }

   // otherwise, display an error and return failure 
   statusPanel.displayMessage(StatusPanel::MESSAGECODE_NO_RACK_FOR_PRODUCT);
   return false;
}

unsigned
Project1::VendingMachine::getProductCount(const char *productName) const
{
   // loop through the product racks looking for 
   // one containing the named product
   for (int rack = 0; rack < NUM_PRODUCT_RACKS; ++rack){
      if (productRacks[rack]->isCompatibleProduct(productName))
      {
         // return the product count from the rack
         return (productRacks[rack]->getNumProductsInRack());
      }
   }
    
   // if no compatible rack was found, return 0
   return 0;
}

unsigned
Project1::VendingMachine::countTill() const
{
   Coin * const *vpCoin;
   unsigned tillCount = 0;

   // loop through all the coins in the coinbox,
   // totalling their values
   for (vpCoin = coinBox; vpCoin < coinBox + MAX_COINS;)
   {
      if (*vpCoin == NULL)
      {
         break;
      }
      tillCount += (*vpCoin++)->getValueCents();
   }

   return tillCount;
}

unsigned
Project1::VendingMachine::getNumCoinsInCoinBox() const
{
   return numCoins;
}
