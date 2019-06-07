/***************************************************************
 * File: product.cpp
 * Author: Coby Jenkins
 * Purpose: Contains the method implementations for the Product class.
 ***************************************************************/

#include "product.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int SHIPPING_MIN = 2;
const int BASE_WEIGHT = 5;
const int MAX_BUFFER = 256;
const int WHITESPACES = 13;

const float TAX_RATE = 0.06f;
const float SHIPPING_RATE = 0.1f;

/**********************************************************************
* FUNCTION: prompt
* PURPOSE: Prompts the user a name, desription, weight, and price.
***********************************************************************/
void Product::prompt ()
{
   cout << "Enter name: ";
   getline (cin, this->name);
   cout << "Enter description: ";
   getline (cin, this->description);
   cout << "Enter weight: ";
   cin >> this->weight;
   do
   {
      cout << "Enter price: ";
      cin >> this->basePrice;
      if (cin.fail ())
      {
         cin.clear ();
         cin.ignore (MAX_BUFFER, '\n');
         basePrice = -1;
      }
   } while (basePrice < 0);
}

/**********************************************************************
* FUNCTION: Get Sales Tax
* PURPOSE: returns .06 (tax rate) * the base price.
***********************************************************************/
float Product::getSalesTax ()
{
   return ((float) TAX_RATE * this->basePrice);
}

/**********************************************************************
* FUNCTION: Get Shipping Cost
* PURPOSE: returns the shipping cost of the product
***********************************************************************/
float Product::getShippingCost ()
{
   float shippingCost = SHIPPING_MIN;
   if (this->weight > BASE_WEIGHT)
      shippingCost += ((this->weight - BASE_WEIGHT) * (float) SHIPPING_RATE);

   return shippingCost;
}

/**********************************************************************
* FUNCTION: Get Total Price
* PURPOSE: returns the base price + sales tax + shipping
***********************************************************************/
float Product::getTotalPrice ()
{
   return (this->basePrice + getSalesTax () + getShippingCost ());
}

/**********************************************************************
* FUNCTION: Display Advertising Profile
* PURPOSE: Displays product information in an advertising profile
***********************************************************************/
void Product::displayAdvertisingProfile ()
{
   cout << this->name << " - $" << this->basePrice << endl;
   cout << "(" << this->description << ")" << endl;
}

/**********************************************************************
* FUNCTION: Display Inventory Line Item
* PURPOSE: Displays product information in an Inventory line item
***********************************************************************/
void Product::displayInventoryLineItem ()
{
   cout << "$" << this->basePrice << " - " << this->name;
   cout.precision (1);
   cout << " - " << this->weight << " lbs" << endl;
   cout.precision (2);
}

/**********************************************************************
* FUNCTION: Display Receipt
* PURPOSE: Displays product price broken down by base, tax, shipping,
*		   and total price
***********************************************************************/
void Product::displayReceipt ()
{
   cout << this->name << endl;
   formatReceiptLine ("Price", this->basePrice);
   formatReceiptLine ("Sales tax", getSalesTax ());
   formatReceiptLine ("Shipping cost", getShippingCost ());
   formatReceiptLine ("Total", getTotalPrice ());
}


/**********************************************************************
* FUNCTION: Format Receipt Line
* PURPOSE: Formats a line for the receipt
***********************************************************************/
void Product::formatReceiptLine (string name, float amount)
{
   cout << "  " << name << ": ";
   for (int i = 0; i < WHITESPACES - name.length (); i++)
      cout << " ";
   cout << "$   ";
   if (amount < 10)
      cout << " ";
   cout << amount << endl;
}