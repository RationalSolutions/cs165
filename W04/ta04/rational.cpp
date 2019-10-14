/***************************************************************
 * File: rational.cpp
 * Author: (your name here)
 * Purpose: Contains the method implementations for the Rational class.
 ***************************************************************/

#include "rational.h"

#include <iostream>
using namespace std;

void Rational::prompt()
{
   cout << "Top: ";
   cin >> top;
   cout << "Bottom: ";
   cin >> bottom;
}

void Rational::display()
{
   cout << top << "/" << bottom << endl;
}

void Rational::displayDecimal()
{
   float value = (float)top/bottom;
   cout << value << endl;
}

void Rational::multiplyBy()
{

}

void Rational::reduce(int top, int bottom)
{

}