/*
* Vending Machine Project
* CSE-40477
*
* ProductRack.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include <cstring>
using std::strcmp;

#include "ProductRack.h"

Project1::ProductRack::ProductRack(
    StatusPanel &statusPanel,
    const char *allowedProductName,
    DeliveryChute &deliveryChute,
    unsigned productPriceCents)
    : statusPanel(statusPanel),
        deliveryChute(deliveryChute),
        productCount(0),
        productPriceCents(productPriceCents)
{
   // load the name of the product allowed to be in this rack
   strcpy(this->allowedProductName, allowedProductName);
}

Project1::ProductRack::~ProductRack()
{
   // clean up memory for any products still in the rack
   for (unsigned product = 0; product < productCount; ++product)
   {
      delete products[product];
   }
}

bool
Project1::ProductRack::isCompatibleProduct(const char *productName) const
{
   return strcmp(allowedProductName, productName) == 0;
}

bool
Project1::ProductRack::isFull() const
{
   return productCount == MAX_PRODUCTS;
}

bool
Project1::ProductRack::isEmpty() const
{
   return productCount == 0;
}

bool
Project1::ProductRack::addProduct(Product* pProduct)
{
   if (isFull())
   {
      statusPanel.displayMessage(StatusPanel::MESSAGECODE_RACK_IS_FULL);
      return false;
   }
   else if (!isCompatibleProduct(pProduct->getName()))
   {
      statusPanel.displayMessage(StatusPanel::MESSAGECODE_PRODUCT_DOES_NOT_MATCH_PRODUCT_RACK);
      return false;
   } 
   else
   {
      products[productCount++] = pProduct;
      return true;
   }
}

bool
Project1::ProductRack::deliverProduct()
{
   // if the rack is empty display error and fail
   if (isEmpty())
   {
      statusPanel.displayMessage(StatusPanel::MESSAGECODE_SOLD_OUT);
      return false;
   }

   // check if the delivery chute is full
   if (deliveryChute.retrieveProduct() != 0)
   {
      // chute full, display error message and fail
      statusPanel.displayMessage(StatusPanel::MESSAGECODE_CHUTE_FULL);
      return false;
   }

   // get the next product in the rack
   Product *nextProduct = products[productCount - 1];

   // insert it into the delivery chute
   if (deliveryChute.insertProduct(nextProduct))
   {
      // remove the product from the rack and
      // decrement the product count
      products[--productCount] = 0;
      return true;
   }
   else
   {
      return false;
   }
}

unsigned
Project1::ProductRack::getNumProductsInRack() const
{
   return productCount;
}

unsigned
Project1::ProductRack::getProductPriceCents() const
{
   return productPriceCents;
}
