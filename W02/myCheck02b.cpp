/***********************************************************************
* Program:
*    Checkpoint 02b, Complex Numbers
*    Brother Alvey, CS165
* Author:
*    Coby Jenkins
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

struct Complex
{
   double real;
   double imaginary;
};

void prompt(Complex & x) {

   cout << "Real: ";
   cin >> x.real;
   cout << "Imaginary: ";
   cin >> x.imaginary;

}

void display(Complex & x)
{
   cout << x.real << " + " << x.imaginary << "i" << endl;
}

/**********************************************************************
 * Function: addComplex
 * Purpose: Adds two complex numbers together and returns the sum.
 ***********************************************************************/
Complex addComplex(const Complex & x, const Complex & y)
{
   Complex sum;

   sum.real = x.real + y.real;
   sum.imaginary = x.imaginary + y.imaginary;

   return sum;
}


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare two Complex objects, c1 and c2
   Complex c1, c2;

   // Call your prompt function twice to fill in c1, and c2
   prompt(c1);
   prompt(c2);

   // Declare another Complex for the sum
   Complex sum;

   // Call the addComplex function, putting the result in sum;
   sum = addComplex (c1, c2);

   
   cout << "\nThe sum is: ";
   display(sum);
   cout << endl;
 
   return 0;
}


