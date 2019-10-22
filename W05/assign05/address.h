/***************************************************************
 * File: address.h
 * Author: Coby Jenkins
 * Purpose: Contains the definition of the Address class
 ***************************************************************/

#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
using namespace std;

class Address
      {
      private:
         string street;
         string city;
         string state;
         string zip;

      public:
         //Getters
         string getStreet() const {return street;};
         string getCity() const {return city;};
         string getState() const {return state;};
         string getZip() const {return zip;};

         //Setters
         void setStreet(string street){this->street = street;};
         void setCity(string city){this->city = city;};
         void setState(string state){this->state = state;};
         void setZip(string zip){this->zip = zip;};

         //Display
         void display();

         //Constructors
         Address()
         {
            setStreet("unknown");
            setCity("");
            setState("");
            setZip("00000");
         }

         Address(string street, string city, string state, string zip)
         {
            setStreet(street);
            setCity(city);
            setState(state);
            setZip(zip);
         }
      };

#endif