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
//TODO: if the value is an improper fraction (larger on top than bottom), it
// displays it as a mixed number
//    1)Identify improper fraction
//    2)Identify whole# & remainder
//    3)Update display format
void Rational::display()
{
   cout << top << "/" << bottom << endl;
}

void Rational::displayDecimal()
{
   float value = (float)top/bottom;
   cout << value << endl;
}
//TODO: Accept a new rational number & multiply it with the old rational
// number
//       1)Get another rational number
//       2)Multiply the tops and the bottoms
//       3)Update driver to reflect this functionality
void Rational::multiplyBy()
{

}
//TODO: reduce the rational numbers to their most basic equivalent (2/6 => 1/3)
//       1)Identify if it can be reduced
//       2)reduce the fraction if possible
//       3)Update the object to reflect the updated value
//       4)Modify rest of code to utilize reduce()
void Rational::reduce(int top, int bottom)
{

}