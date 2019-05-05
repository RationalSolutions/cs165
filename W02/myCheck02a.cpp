/***********************************************************************
* Program:
*    Checkpoint 02a, Structs
*    Brother Alvey, CS165
* Author:
*    Coby Jenkins
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

struct Student
{
   string firstName;
   string lastName;
   int studentId;
};

void displayStudent(Student user)
{
   cout << "Your information:\n";
   cout << user.studentId << " - " << user.firstName << " " << user.lastName
   << "\n";

}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   Student user;

   cout << "Please enter your first name: ";
   cin >> user.firstName;
   cout << "Please enter your last name: ";
   cin >> user.lastName;
   cout << "Please enter your id number: ";
   cin >> user.studentId;
   cout << endl;

   displayStudent(user);

   return 0;
}
