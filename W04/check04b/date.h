/********************************************************************
 * File: date.h
 * Purpose: Holds the definition of the Date class.
 ********************************************************************/

#ifndef DATE_H
#define DATE_H

/**********************************************************************
* Class: Date
* Purpose: Stores information about a date
***********************************************************************/
class Date
{
private:
   int month;
   int day;
   int year;

public:

   void set(int month, int day, int year);

   void displayAmerican();

   void displayEuropean();

   void displayISO();
};

#endif
