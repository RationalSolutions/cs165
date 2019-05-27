/*********************************************************************
 * File: check04b.cpp
 * Purpose: contains the main method to exercise the Date class.
 *********************************************************************/

#include "date.h"

#include <iostream>
using namespace std;

int main()
{
   int month;
   int day;
   int year;

   cout << "Month: ";
   cin >> month;
   cout << "Day: ";
   cin >> day;
   cout << "Year: ";
   cin >> year;
   cout << endl;

   Date date;
   date.set(month, day, year);

   date.displayAmerican();
   date.displayEuropean();
   date.displayISO();

   return 0;
}
