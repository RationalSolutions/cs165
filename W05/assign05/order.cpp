/***************************************************************
 * File: order.cpp
 * Author: Coby Jenkins
 * Purpose: Contains the method implementations for the Order class.
 ***************************************************************/

#include "order.h"
#include "customer.h"
#include "address.h"

#include <string>
#include <iostream>
using namespace std;


/**
 * METHOD: displayInformation()
 * PURPOSE:
 */
void Order::displayInformation()
{
   cout << customer.getName() << endl;
   cout << product.getName() << endl;
   cout << "Total Price: $" << getTotalPrice() << endl;
}

string Order::getShippingZip()
{
   Address temp = customer.getAddress();
   return temp.getZip();
}

