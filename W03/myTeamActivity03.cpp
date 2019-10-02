/***********************************************************************
* Program:
*    Team Activity 03, Parsing streams
*    Brother Alvey, CS165
* Author:
*    Coby Jenkins
* Summary:
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

// declare structures
struct Scripture
{
   string book;
   int chapter;
   int startVerse;
   int endVerse;
};

// function prototypes
void display(const Scripture scripture[], const int &numEntries);
void convertStruct(string fileWords, Scripture &scripture);
int readFile(string fileName, Scripture scripture[]);

/***********************************************************************
* Function: main
* Description: The driver for the program.
***********************************************************************/
int main()
{
   string fileName;
   Scripture scripture[50];
   int numEntries = 0;
   cout << "Enter filename: ";
   cin >> fileName;

   // Pass to readFile function
   numEntries = readFile(fileName, scripture);

   // Display Scriptures
   display(scripture, numEntries);

   return 0;
}

/***********************************************************************
* Function: display
* Description: Displays the passed scripture.
***********************************************************************/
void display(const Scripture scripture[], const int &numEntries)
{
   for (int i = 0; i < numEntries; i++)
   {
      cout << scripture[i].book << " ";
      cout << scripture[i].chapter;
      if (scripture[i].startVerse != 0)
      {
         cout << ":" << scripture[i].startVerse;
         if (scripture[i].endVerse != 0)
         {
            cout << "-" << scripture[i].endVerse;
         }
      }
      cout << endl;
   }
}

/***********************************************************************
* Function: ConvertStruct
* Description: Converts the information from string to struct using
* string stream.
***********************************************************************/
void convertStruct(string fileWords, Scripture &scripture)
{
   stringstream convert(fileWords);
   convert >> scripture.book;

   if(scripture.book.length() == 1)
   {
      string bookNo = scripture.book;
      convert >> scripture.book;
      scripture.book = bookNo + ' ' + scripture.book;
   }

   convert >> scripture.chapter;
   convert >> scripture.startVerse;
   if (convert.fail())
   {
      convert.clear();
      scripture.startVerse = 0;
      scripture.endVerse = 0;
   }
   else
   {
      convert >> scripture.endVerse;
      if (convert.fail())
      {
         convert.clear();
         scripture.endVerse = 0;
      }
   }

   if (scripture.endVerse != 0 && scripture.startVerse > scripture.endVerse)
   {
      int tempNum = scripture.startVerse;
      scripture.startVerse = scripture.endVerse;
      scripture.endVerse = tempNum;
   }
}

/***********************************************************************
* Function: readFile
* Description: Reads file, calls functions to convert to struct and
* to the user.
***********************************************************************/
int readFile(string fileName, Scripture scripture[])
{
   string fileWords;
   int numEntries = 0;

   // Open File
   ifstream fin(fileName.c_str());

   // Check for errors
   if (fin.fail())
   {
      cout << "ERROR: Cannot read file \"" << fileName << "\"\n";
      fin.close();
      return 0;
   }

   // Read FIle
   do
   {
      // Get text and store in string
      getline(fin, fileWords);

      // Convert string into struct
      convertStruct(fileWords, scripture[numEntries]);
      ++numEntries;
   }
   while (!fin.eof());


   // Close file
   fin.close();

   return numEntries - 1;
}
}