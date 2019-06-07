#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "address.h"

class Customer
{
public:
   //getters
   Address getAddress
   const { return this->address; }

   string getName () const
   { return this->name; }

   //setters
   void setAddress (Address address)
   { this->address = address; }

   void setName (string name)
   { this->name = name; }

   //constructors
   Customer ()
   {
      setName ("unspecified");
      setAddress (Address ());
   }

   Customer (string name, Address address)
   {
      setName (name);
      setAddress (address);
   }

   //class methods
   void display ();

private:
   string name;
   Address address;
};

#endif
