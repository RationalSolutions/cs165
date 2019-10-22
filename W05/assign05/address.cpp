/***************************************************************
 * File: address.cpp
 * Author: Coby Jenkins
 * Purpose: Contains the method implementations for the Address class.
 ***************************************************************/

#include "address.h"

#include <iostream>
using namespace std;

/**
 * METHOD: display()
 * PURPOSE: Displays the information in the desiginated format
 */
void Address::display()
{
   cout << street << endl;
   cout << city << ", " << state << " " << zip << endl;
}