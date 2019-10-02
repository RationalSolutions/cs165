/***********************************************************************
* Program:
*    Checkpoint 03b, Errors
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
* Purpose: Prompt the user for a number and force them to continue to enter
*              a value until they enter an integer value.
***********************************************************************/
int prompt ()
{
   int number;

   //does this loop at least once and if it doesn't get a valid input, repeats
   do
   {
      cout << "Enter a number: ";
      cin >> number;

      if (cin.fail ())
      {
         cout << "Invalid input." << endl;
         cin.clear ();
         cin.ignore (265, "\n");
      }

   } while (!number)

   return number;
}

/**********************************************************************
* Function: main
* Purpose: This is the entry point and driver for the program.
***********************************************************************/
int main()
{
   int number = prompt ();
   cout << "The number is: " << number << ".\n";
   return 0;
}