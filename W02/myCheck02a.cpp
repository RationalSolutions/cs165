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
   String firstName;
   String lastName;
   int studentId;
};

void displayStudent(Student user)
{
   cout << user.studentId << "# - " << user.firstName << " " << user.lastName;
   cout << endl;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   return 0;
}
