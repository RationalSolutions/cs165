/***************************************************************
 * File: customer.cpp
 * Author: Coby Jenkins
 * Purpose: Contains the method implementations for the Customer class.
 ***************************************************************/

#include "customer.h"
using namespace std;

void Customer::display()
{
   cout << getName() << endl;
   cout << address.display() << endl;
}
