/***************************************************************
 * File: product.h
 * Author: Coby Jenkins
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H

#include<string>

using namespace std;

class Product
{
public:

   void prompt();

   float getTotalPrice();

   void displayAdvertisingProfile();

   void displayInventoryLineItem();

   void displayReceipt();

private:
   string name;
   float basePrice;
   float weight;
   string description;
   double shipCost;
   double salesTax;

   void formatReceiptLine(string name, float amount);

   float getSalesTax();

   float getShippingCost();

};

#endif
