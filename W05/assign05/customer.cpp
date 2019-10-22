/***************************************************************
 * File: customer.cpp
 * Author: Coby Jenkins
 * Purpose: Contains the method implementations for the Customer class.
 ***************************************************************/

#include "customer.h"
#include "address.h"

#include <iostream>
using namespace std;

/**
 * METHOD: display()
 * PURPOSE: Displays the information in the desiginated format
 */
void Customer::display()
{
   cout << getName() << endl;
   address.display();
}
