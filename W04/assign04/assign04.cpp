/***************************************************************
 * File: assign04.cpp
 * Author: Coby Jenkins
 * Purpose: Contains the main function to test the Product class.
 ***************************************************************/

#include <iostream>
#include <string>

using namespace std;

#include "product.h"

int main ()
{
   Product product;

   product.prompt ();

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

   cout.setf (ios::fixed);
   cout.setf (ios::showpoint);
   cout.precision (2);

   switch (choice)
   {
      case 1:
         product.displayAdvertisingProfile ();
         break;
      case 2:
         product.displayInventoryLineItem ();
         break;
      case 3:
         product.displayReceipt ();
         break;
   }

   return 0;
}
