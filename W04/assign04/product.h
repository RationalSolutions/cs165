/***************************************************************
 * File: product.h
 * Author: (your name here)
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>


class Product
{
private:
   string name;
   string description;
   double basePrice;
   double weight;

   string getUserInput(string prompt);
   double getUserInput(string prompt);
   bool isValid(int subject);
   bool isValid(double subject);

public:
   void prompt();
   double getSalesTax();
   double getShippingCost();
   double getTotalPrice();
   void displayAdvertisingProfile();
   void displayInventoryLineItem();
   void displayReceipt();
};

#endif
