/***************************************************************
 * File: product.cpp
 * Author: (your name here)
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
cout.precision(2);


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

//TODO: Create a getTotalPrice method that uses your other methods to return
//       a total price.

//TODO: Create display method to display the data in the following format:
//       Advertising Profile: Should display the name, base price, and
//                            description in this format:
//                                     Finding Peace, Happiness, and Joy by Richard G. Scott - $14.49
//                                     (Elder Scott powerfully outlines the truths we need to understand and
//                                     embrace in order to experience the gifts of peace, happiness, and joy.)

//TODO: Create display method to display the data in the following format:
//      Inventory Line Item: Should display the base price, name, and weight
//                            in this format:
//                               $14.49 - Finding Peace, Happiness, and Joy by Richard G. Scott - 1.5 lbs

//TODO: Create display method to display the data in the following format:
//            Receipt: Should display the name, base price, sales tax,
//                      shipping cost, and total price, in this format:
//                            Finding Peace, Happiness, and Joy by Richard G. Scott
//                              Price:         $   14.49
//                              Sales tax:     $    0.87
//                              Shipping cost: $    2.00
//                              Total:         $   17.36

// put your method bodies here


