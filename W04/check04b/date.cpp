/********************************************************************
 * File: date.cpp
 * Purpose: Holds the implementation of the Date class methods.
 ********************************************************************/
#include "date.h"

#include <iostream>
using namespace std;
/**********************************************************************
* Method: Set
* Purpose: Sets the day month and year private member variables
***********************************************************************/
void Date::set(int month, int day, int year)
{
   this->day = day;
   this->month = month;
   this->year = year;
}

/**********************************************************************
* Method: Display American
* Purpose: displays the date in the format mm/dd/yyyy
***********************************************************************/
void Date::displayAmerican()
{
    cout << month << "/" << day << "/" << year << endl;
}

/**********************************************************************
* Method: Display European
* Purpose: displays the date in the format dd/mm/yyyy
***********************************************************************/
void Date::displayEuropean()
{
   cout << day << "/" << month << "/" << year << endl;
}

/**********************************************************************
* Method: Display ISO
* Purpose: displays the date in the format yyyy-mm-dd
***********************************************************************/
void Date::displayISO()
{
   cout << year << "-" << month << "-" << day << endl;
}