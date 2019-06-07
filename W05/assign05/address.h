// File: address.h

#ifndef ADDRESS_H
#define ADDRESS_H

#include  <string>

using namespace std;

class Address
{
public:
   string getStreet() const { return this->street;}
   string getCity() const { return this->city;}
   string getState() const { return this->state;}
   string getZip() const { return  this->zip;}

   




private:
   string street;
   string city;
   string state;
   string zip;
};
// Put your Address class here

#endif
