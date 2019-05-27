/***********************************************************************
* Program:
*    Checkpoint 04a, Classes
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
* Class: Book
* Purpose: Stores book information. has a prompt and display method
***********************************************************************/
class Book
{
private:
   string author;
   string title;

public:

   void prompt()
   {
      cout << "Title: ";
      getline(cin, title);
      cout << "Author: ";
      getline(cin, author);
   }

   void display()
   {
      cout << "\"" + title + "\" by " + author << endl;
   }
};

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   Book book;

   book.prompt();
   book.display();

   return 0;
}
