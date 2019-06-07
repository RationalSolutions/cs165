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
   float totalPrice = getProduct().getTotalPrice() * getQuantity();
   cout << getCustomer().getName() << endl;
   cout << getProduct().getName() << endl;
   cout << "Total Price: $" << totalPrice << endl;
}