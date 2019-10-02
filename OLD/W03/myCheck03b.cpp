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

using namespace std;

int prompt ()
{
   int num;

   do
   {
      cout << "Enter a number: ";
      cin >> num;

      if (cin.fail ())
      {
         cout << "Invalid input." << endl;
         cin.clear ();
         cin.ignore (256, '\n');
      }

   } while (!num);

   return num;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main ()
{
   int num = prompt ();
   cout << "The number is " << num << "." << endl;

   return 0;
}