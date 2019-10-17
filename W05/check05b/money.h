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

   int getDollars() const;
   int getCents() const;

   Money ()
   {
      setDollars (0);
      setCents (0);
   }

   Money (int dollars)
   {
      setDollars (dollars);
      setCents (0);
   }

   Money (int dollars, int cents)
   {
      setDollars (dollars);
      setCents (cents);
   }
};

#endif
