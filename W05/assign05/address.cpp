/***************************************************************
 * File: address.cpp
 * Author: Coby Jenkins
 * Purpose: Contains the method implementations for the Address class.
 ***************************************************************/

#include "address.h"

using namespace std;

void Address::display()
{
   cout << street << endl;
   cout << city << ", " << state << " " << zip << endl;
}