/***********************************************************************
* Program:
*    Checkpoint 01a, C++ Basics  
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
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main ()
{
   string name;
   string age;

   cout << "Hello CS 165 World!\n";
   cout << "Please enter your first name: ";
   cin >> name;
   cout << "Please enter your age: ";
   cin >> age;
   cout << endl;
   cout << "Hello " << name << ", you are " << age << " years old.\n";

   return 0;
}
