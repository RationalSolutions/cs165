/***************************************************************
 * File: assign04.cpp
 * Author: Coby Jenkins
 * Purpose: Contains the main function to test the Product class.
 ***************************************************************/

#include "product.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);

   Product product;

   product.prompt();

   cout << endl;
   cout << "Choose from the following options:\n";
   cout << "1 - Advertising profile\n";
   cout << "2 - Inventory line item\n";
   cout << "3 - Receipt\n";
   cout << endl;
   cout << "Enter the option that you would like displayed: ";

   int choice;
   cin >> choice;

   cout << endl;

   if (choice == 1)
   {
      product.displayAdvertisingProfile ();
   }
   else if (choice == 2)
   {
      product.displayInventoryLineItem ();
   }
   else
   {
      product.displayReceipt ();
   }

   return 0;
}
