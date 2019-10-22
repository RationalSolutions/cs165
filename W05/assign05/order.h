/***************************************************************
 * File: order.h
 * Author: Coby Jenkins
 * Purpose: Contains the definition of the Order class
 ***************************************************************/

#ifndef ORDER_H
#define ORDER_H

#include "product.h"
#include "customer.h"

#include <string>
using namespace std;

class Order
{
private:
   Product product;
   Customer customer;
   int quantity;

public:
   //Default constructor
   Order()
   {
      product = Product ();
      customer = Customer ();
      quantity = 0;
   }

   //Non-Default constructor
   Order(Product product, int quantity, Customer customer)
   {
      this->product = product;
      this->customer = customer;
      this->quantity = quantity;
   }

   //Setters
   void setProduct(Product product){ this->product = product; };
   void setCustomer(Customer customer){ this->customer = customer; };
   void setQuantity(int quantity){ this->quantity = quantity; };

   //Getters
   Product getProduct() const { return product; };
   Customer getCustomer() const { return customer; };
   int getQuantity() const { return quantity; };
   string getShippingZip();
   double getTotalPrice() {return (quantity * product.getTotalPrice ());};

   //Display methods
   void displayShippingLabel() {customer.display();};
   void displayInformation();
};

#endif
