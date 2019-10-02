/***********************************************************************
* Program:
*    Checkpoint 03a, Exceptions
*    Brother Alvey, CS165
* Author:
*    Coby Jenkins
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>

using namespace std;

int prompt () throw (const char *)
{
   int num;

   cout << "Enter a number: ";
   cin >> num;
   if (num < 0)
   {
      throw "negative.";
   }
   if (num > 100)
   {
      throw "greater than 100.";
   }
   if (num % 2)
   {
      throw "odd.";
   }
   return num;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main ()
{
   try
   {
      int num = prompt ();
      cout << "The number is " << num << "." << endl;
   } catch (const char *error)
   {
      cout << "Error: The number cannot be " << error << endl;
   }
   return 0;
}
