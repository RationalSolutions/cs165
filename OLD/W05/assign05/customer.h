#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "address.h"

class Customer
{
public:
   //getters
   string getName () const { return this->name; }

   Address getAddress () const { return this->address; }


   //setters
   void setName (string name) { this->name = name; }

   void setAddress (Address address) { this->address = address; }

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
