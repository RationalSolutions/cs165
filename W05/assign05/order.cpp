/***************************************************************
 * File: order.cpp
 * Author: Coby Jenkins
 * Purpose: Contains the method implementations for the Order class.
 ***************************************************************/

#include "order.h"

#include <string>
using namespace std;

void Order::displayInformation()
{
   cout << customer.getName() << endl;
   cout << product.getName() << endl;
   cout << "Total Price: $" << getTotalPrice() << endl;
}