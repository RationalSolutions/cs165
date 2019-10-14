/***************************************************************
 * File: product.cpp
 * Author: Coby Jenkins
 * Purpose: Contains the method implementations for the Product class.
 ***************************************************************/

#include "product.h"

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

const int MIN_LENGTH = 1;
const int MAX_BUFFER = 256;

const double MIN_VALUE = 0.0;
const double TAX_RATE = 0.06;
const double SHIPPING_RATE = 0.1;
const double SHIPPING_MIN = 2.0;
const double BASE_SHIPPING_WEIGHT = 5.0;

cout.setf(ios::fixed);
cout.setf(ios::showpoint);


/**
 * METHOD: prompt
 * PURPOSE: prompts the user for the variables for the Product.
 */
void Product::prompt()
{

   double tempDouble;

   cout << "Enter name: ";
   name = getUserInput("name");

   cout << "Enter description: ";
   description = getUserInput("description");

   cout << "Enter weight: ";
   weight = getUserInput("weight");

   cout << "Enter price: ";
   basePrice = getUserInput("price");
}

/**
 * METHOD: getUserInput()
 * PURPOSE: accepts and validates the length of a string input from the user
 * @return string
 */
string Product::getUserInput(string prompt)
{
   string tempString;

   do
   {
      bool ok = false;
      getline(cin, tempString);

      if(isValid(tempString.length()))
         ok = true;
      else
      {
         cout << "Enter " << prompt << ": ";
         tempString = null;
      }

   }while (!ok);

   return tempString;
}

/**
 * METHOD: getUserInput()
 * PURPOSE: accepts and validates a double input from the user
 * @return
 */
double Product::getUserInput(string prompt)
{
   double tempDouble;

   do
   {
      bool ok = false;
      cin >> tempDouble;
      if(cin.fail())
      {
         cin.clear();
         cin.ignore(MAX_BUFFER, '\n');
         tempDouble = -1;
      }

      if(isValid(tempDouble))
      {
         ok = true;
      } else
      {
         cout << "Enter " << prompt << ": ";
         tempDouble = -1;
      }
   }while (!ok);

   return tempDouble;
}

/**
 * METHOD: isValid
 * PURPOSE: determines if the string.length() value passed is at least 1
 * @param subject
 * @return
 */
bool Product::isValid(int subject)
{
   if(subject < MIN_LENGTH)
   {
      return false;
   }else return true;
}

/**
 * METHOD: isValid
 * PURPOSE: determines if the double value passed is at least 0.0
 * @param subject
 * @return
 */
bool Product::isValid(double subject)
{
   if(subject <= MIN_VALUE)
   {
      return false;
   }else return true;
}

/**
 * METHOD: getSalesTax()
 * PURPOSE: calculate and retun the taxes on product.
 * @return
 */
double Product::getSalesTax()
{
   return ((double) TAX_RATE * basePrice);
}

/**
 * METHOD: getShippingCost()
 * PURPOSE: calculates shipping cost based on the Product.weight
 * @return
 */
double Product::getShippingCost()
{
   double shippingCost = SHIPPING_MIN;

   if(weight > BASE_SHIPPING_WEIGHT)
   {
      shippingCost += ((weight - BASE_SHIPPING_WEIGHT) * (double)
            SHIPPING_RATE);
   }

   return shippingCost;
}

/**
 * METHOD: getTotalPrice()
 * PURPOSE: generates the total price for a product after calling
 *          getSalesTax() and getShippingCost() then sums the values and
 *          returns the total.
 * @return
 */
double Product::getTotalPrice ()
{
   return (basePrice + getSalesTax () + getShippingCost ());
}

/**
 * METHOD: displayAdvertisingProfile()
 * PURPOSE: Displays the advertising profile for the Product
 */
void Product::displayAdvertisingProfile ()
{
    cout << name << " - $" << basePrice << endl;
    cout << "(" << description << ")" << endl;
}

/**
 * METHOD: displayInventoryLineItem()
 * PURPOSE: display formated output for the Inventory Line Item
 */
void Product::displayInventoryLineItem ()
{
   cout.precision(1);
   cout << "$" << basePrice
        << " - " << name
        << " - " << weight
        << " lbs" << endl;
}


/**
 * METHOD: displayReceipt()
 * PURPOSE: displays formatted output for the Receipt
 */
void Product::displayReceipt ()
{
   cout.precision(2);
   cout << name << endl;
   cout << "  " << "Price:" << setw(15) << "$" << setw(8) << basePrice << endl;
   cout << "  " << "Sales tax:"
        << setw(15) << "$" << setw(8) << getSalesTax () << endl;
   cout << "  " << "Shipping cost:"
        << setw(15) << "$" << setw(8) << getShippingCost() << endl;
   cout << "  " << "Total:" << setw(15) << "$" << setw(8) << getTotalPrice()
        << endl;
}