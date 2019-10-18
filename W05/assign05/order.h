// File: order.h

#ifndef ORDER_H
#define ORDER_H

#include "product.h"
#include "customer.h"


// Put your Order class here


#endif

//TODO: Create a class for an Order that has the following:
//      private data members:
//             product : Product
//             quantity : int
//             customer : Customer
//      public methods:
//             getProduct / setProduct
//             getQuantity / setQuantity
//             getCustomer / setCustomer
//             getShippingZip - Returns the Zip from the customer's address
//             getTotalPrice - Returns the total price of the product
//                             (including tax and shipping) multiplied by the
//                             quantity.
//             displayShippingLabel
//             displayInformation

Class Order
{
private:
   Product product;
   Customer customer;
   int quantity;

public:
   void setProduct()
};
//TODO: should have following constructors:
//      Default - Set the quantity to 0 and uses the product and customer's
//                default constructors.
//      Non-default - Accepts a Product, quantity, and Customer