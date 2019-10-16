/******************
 * File: money.h
 ******************/
#ifndef MONEY_H
#define MONEY_H

class Money
{
private:
   int dollars;
   int cents;

   void setDollars(int dollars);
   void setCents(int cents);


public:
   void prompt();
   void display() const;

   int getDollars();
   int getCents();
};

#endif
