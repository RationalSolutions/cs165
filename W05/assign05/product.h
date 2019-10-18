/***************************************************************
 * File: product.h
 * Author: Coby Jenkins
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product
{
private:
   string name;
   string description;
   double basePrice;
   double weight;

   string getUserInput(string prompt);
   double getUserInput(string prompt, int diff);
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

   void setName(string name){this->name = name;}
   void setDescription(string description){this->description = description;}
   void setBasePrice(double basePrice){this->basePrice = basePrice;}
   void setWeight(double weight){this->weight = weight;}

   string getName(string name) const {return name;}
   string getDescription(string description) const {return description;}
   double getBasePrice(double basePrice) const {return basePrice;}
   double getWeight(double weight) const {return weight;}

   Product()
   {
      setName ("none");
      setDescription ("");
      setBasePrice (0);
      setWeight (0);

   }

   Product(string name, string description, double basePrice, double weight)
   {
      setName (name);
      setDescription (description);
      setBasePrice (basePrice);
      setWeight (weight);

   }
};

#endif