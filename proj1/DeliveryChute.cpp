/*
* Vending Machine Project
* CSE-40477
*
* DeliveryChute.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include "DeliveryChute.h"

Project1::DeliveryChute::DeliveryChute(StatusPanel &statusPanel)
    : statusPanel(statusPanel),
      pProduct(0)
{
   
}

Project1::DeliveryChute::~DeliveryChute()
{
   // clean up a product left in the chute
   if (pProduct != NULL)
      delete pProduct;
}

bool
Project1::DeliveryChute::insertProduct(Product *pProduct)
{
   // If there isn't a product in the chute already, add it
   if (!containsProduct())
   {
      this->pProduct = pProduct;
      return true;
   }
   else
   {
      // otherwise show an error message
      statusPanel.displayMessage(StatusPanel::MESSAGECODE_CHUTE_FULL);
      return false;
   }
}

Project1::Product *
Project1::DeliveryChute::retrieveProduct()
{
   // if the chute contains a product, retrieve it
   if (containsProduct())
   {
      Product *retrievedProduct = pProduct;

      this->pProduct = NULL;
      return retrievedProduct;
   }
   else
      return 0;
}

bool
Project1::DeliveryChute::containsProduct() const
{
    return (this->pProduct != NULL);
}