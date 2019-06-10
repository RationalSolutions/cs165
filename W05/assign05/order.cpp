#include "order.h"

#include <iostream>
#include <string>

/**********************************************************************
* FUNCTION: Display Shipping Label
* PURPOSE: Displays the name & address in a mailing format
*          pulled from the customer class
***********************************************************************/
void Order::displayShippingLabel()
{
   getCustomer().display();
}

/**********************************************************************
* FUNCTION: Display information
* PURPOSE: Displays the customer name, product name and total price
***********************************************************************/
void Order::displayInformation()
{

   cout << getCustomer().getName() << endl;
   cout << getProduct().getName() << endl;
   cout << "Total Price: $" << getTotalPrice() << endl;
}

/**********************************************************************
* FUNCTION: Get Total Price
* PURPOSE: Calculates the total price based on product price and quantity
***********************************************************************/
float Order::getTotalPrice()
{
   return product.getTotalPrice() * this->quantity;
}