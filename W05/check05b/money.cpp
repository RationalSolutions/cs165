/***********************
 * File: money.cpp
 ***********************/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

#include "money.h"

/*****************************************************************
 * Function: prompt
 * Purpose: Asks the user for values for dollars and cents
 *   and stores them.
 ****************************************************************/
void Money :: prompt()
{
   int dollars;
   int cents;

   cout << "Dollars: ";
   cin >> dollars;

   cout << "Cents: ";
   cin >> cents;

   setDollars(dollars);
   setCents(cents);
}

/*****************************************************************
 * Function: display
 * Purpose: Displays the value of the money object.
 ****************************************************************/
void Money :: display() const 
{
   cout << "$" << getDollars() << ".";
   cout << setfill('0') << setw(2) << getCents();
}

/**
 * METHOD: getCents()
 * PURPOSE: returns the member variable cents.
 * @return
 */
int Money::getCents () const
{
   return cents;
}

/**
 * METHOD: getDollars()
 * PURPOSE: returns the member variable dollars.
 * @return
 */
int Money::getDollars () const
{
   return dollars;
}

/**
 * METHOD: setCents()
 * PURPOSE: sets the member variable cents. This is marked private since
 *          only member methods call this function. This abstractions allows
 *          the setter to remain private where normally it wouldn't be able to.
 *
 *          This utilizes the abs() method to ensure that the variable set is a
 *          positive value.
 * @param cents
 */
void Money::setCents (int cents)
{
   int absCents = abs(cents);

   this->cents = absCents;
}

/**
 * METHOD: setDollars()
 * PURPOSE: sets the member variable dollars. This is marked private since
 *          only member methods call this function. This abstractions allows
 *          the setter to remain private where normally it wouldn't be able to.
 *
 *          This utilizes the abs() method to ensure that the variable set is a
 *          positive value.
 * @param dollars
 */
void Money::setDollars (int dollars)
{
   int absDollars = abs(dollars);

   this->dollars = absDollars;
}