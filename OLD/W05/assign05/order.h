#ifndef ORDER_H
#define ORDER_H

#include "product.h"
#include "customer.h"

class Order
{
public:

   //getters
   Product getProduct () const { return this->product; }
   int getQuantity () const { return this->quantity; }
   Customer getCustomer () const { return this->customer; }
   string getShippingZip () const { return this->customer.getAddress().getZip(); }
   float getTotalPrice ();

   //setters
   void setProduct (Product product) { this->product = product; }
   void setQuantity (int quantity) { this->quantity = quantity; }
   void setCustomer (Customer customer) { this->customer = customer; }

   //constructors
   Order ()
   {
      setQuantity (0);
      setProduct (Product ());
      setCustomer (Customer ());
   }

   Order (Product product, int quantity, Customer customer)
   {
      setQuantity (quantity);
      setProduct (product);
      setCustomer (customer);
   }

   //class methods
   void displayShippingLabel ();
   void displayInformation ();


private:
   Product product;
   int quantity;
   Customer customer;
};


#endif
