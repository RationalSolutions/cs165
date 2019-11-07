/*********************
 * phone.cpp
 *********************/
#include "phone.h"

#include <iostream>
using namespace std;

void Phone::promptNumber()
{
   cout << "Area Code: ";
   cin >> areaCode;
   cout << "Prefix: ";
   cin >> prefix;
   cout << "Suffix: ";
   cin >> suffix;

}

void Phone::display()
{
   cout << "(" << areaCode
        << ")" << prefix
        << "-" << suffix;
}