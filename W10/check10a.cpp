/***********************************************************************
* Program:
*    Checkpoint 10a, Vectors
*    Brother Alvey, CS165
* Author:
*    Coby Jenkins
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
************************************************************************/
#include <vector>
#include <string>
#include <iostream>
using namespace std;


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   vector <int> intVec;
   vector <string> strVec;
   int userInt;
   string userStr;

   do{
      cout << "Enter int: ";
      cin >> userInt;
      if(userInt != 0 ){
         intVec.push_back(userInt);
      }
   }while (userInt != 0);

      cout << "Your list is:" << endl;
   for (vector <int> :: iterator ii = intVec.begin(); ii != intVec.end(); ii++)
   {
      cout << *ii << endl;
   }

   cout << endl;

   do{
      cout << "Enter string: ";
      cin >> userStr;
      if(userStr != "quit"){
         strVec.push_back(userStr);
      }
   }while (userStr != "quit");

   cout << "Your list is:" << endl;
   for (vector <string> :: iterator si = strVec.begin(); si != strVec.end();
        si++)
   {
      cout << *si << endl;
   }

   return 0;
}