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
#include <string>

using namespace std;

/**********************************************************************
 * Function: prompt
 * Purpose: Prompt the user for a positive integer less than 100
 ***********************************************************************/
int prompt() throw(const char *)
{
   int number;

   cout << "Enter a number: ";
   cin >> number;

   if (number < 0)
      throw "negative."; //exception

   if (number > 100)
      throw "greater than 100."; //exception

   if (number % 2)
      throw "odd."; //exception

   return number;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
 int main()
{
   try // try block to signal there might be an exception
   {
      int number = prompt();
      cout << "The number is "
           << number
           << "."
           << endl;
   } catch (const char *error) //catch the potential exception
   {
      cout << "Error: The number cannot be "
           << error
           << endl;
   }
   return 0;
}