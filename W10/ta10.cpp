#include <iostream>
#include <vector>

using namespace std;
void promptNumbers(vector <int> &intNums);
void displayNumbers(vector <int> &intNums);
void removeOdds(vector <int> &intNums);

/*****************************************************************************
 * FUNCTION: Main
 * Simple driver
 ******************************************************************************/
int main()
{

   // Create vector
   vector <int> intNums;

   // Prompt for numbers
   promptNumbers(intNums);

   // Display what is in vector to user
   displayNumbers(intNums);

   // Remove all odd numbers from vector
   removeOdds(intNums);

   // Display again to the user.
   displayNumbers(intNums);

   return 0;
}

/******************************************************************************
 * FUNCTION: promptNumbers
 * prompts user for a set of integers and inserts them into the vector until
 * 0 is entered
 *****************************************************************************/
void promptNumbers(vector <int> &intNums)
{
   cout << "Please enter some integers.  Enter \"0\" when done\n";
   int num;
   cin >> num;
   while (num != 0)
   {
      intNums.push_back(num);
      cin >> num;
   }

   return;
}

/*****************************************************************************
 * FUNCTION: displayNumbers
 * loops through the vector to display each number that the user entered.
 ****************************************************************************/
void displayNumbers(vector <int> &intNums)
{
   // display numbers using a iterator loop
   for(vector <int> :: iterator it = intNums.begin();
       it < intNums.end();
       it++)
   {
      cout << *it;
      cout << (it == intNums.end() - 1 ? "\n" : ", ");
   }

   return;
}

/*****************************************************************************
 * FUNCTION: removeOddNumbers
 * removes elements of the vector that are odd numbers
 *****************************************************************************/
void removeOdds(vector <int> &intNums)
{
   for (vector <int> :: iterator it = intNums.begin(); it != intNums.end();)
      if (*it % 2 != 0)            // dereference it to determine if the number is odd
         it = intNums.erase(it);   // update it when we erase the number
      else
         ++it; // Increment it only if we don’t erase an element

   return;
}