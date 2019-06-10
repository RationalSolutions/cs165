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
   void displayAdvertising();
   void displayInventory();
   void displayReceipt();

   //setters
   void setName(string name) { this->name = name; }
   void setDescription(string desc) { this->description = desc; }
   void setBasePrice(float price) { this->basePrice = price; }
   void setWeight(float weight) { this->weight = weight; }

   //getters
   string getName() const { return this->name; }
   string getDescription() const { return this->description; }
   float getBasePrice() const { return this->basePrice; }
   float getWeight() const { return this->weight; }

   Product() { setName("none"); setDescription(""); setWeight(0.0f);
      setBasePrice(0.0f); }
   Product(string name, string desc, float price, float weight) {
      setName (name); setDescription(desc); setWeight(weight); setBasePrice
      (price); }

private:
   string name;
   float basePrice;
   float weight;
   string description;
   double shipCost;
   double salesTax;

   float getSalesTax();
   float getShippingCost();

};

#endif
