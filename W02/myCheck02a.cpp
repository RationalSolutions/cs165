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
#include <string>
using namespace std;

struct Student
{
   string firstName;
   string lastName;
   int idNumber;
};

void displayStudent(const Student & student){
   cout << "Your information:\n"
        << student.idNumber
        << " - "
        << student.firstName
        << " "
        << student.lastName
        << endl;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   Student student;

   cout << "Please enter your first name: ";
   cin >> student.firstName;
   cout << "Please enter your last name: ";
   cin >> student.lastName;
   cout << "Please enter your id number: ";
   cin >> student.idNumber;
   cout << endl;

   displayStudent(student);

   return 0;
}
