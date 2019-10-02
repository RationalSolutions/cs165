/***********************************************************************
* Program:
*    Assignment 02, Digital Forensics
*    Brother Alvey, CS165
* Author:
*    Coby Jenkins
* Summary:
*    Write a program to scan through that log to identify users who accessed
*       files in a particular window of time.
*
*    Estimated:  4.0 hrs
*    Actual:     4.0 hrs
*      Figuring out how to break the functions into the most cohesive functions
 *          The problem came from not every requirement for the program was
 *          exclusive to only one function requiring som additional functions
************************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

//constants
const int MAX_RESULTS = 500;

// structs
struct AccessRecord
{
   string userName;
   string fileName;
   long timeStamp;
};

struct Query
{
   string accessRecord;
   int fileLength;
   int resultCount;
   int results[MAX_RESULTS];
   long startTime;
   long endTime;
};

//Prototypes
void getFile(Query &query);

void getTime(Query &query);

void readFile(Query &query, AccessRecord record[MAX_RESULTS]);

void fileSearch(Query &query, AccessRecord record[MAX_RESULTS]);

void display(Query &query, AccessRecord record[MAX_RESULTS]);

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   //declare the structures
   Query query;
   AccessRecord record[MAX_RESULTS];

   //execute the programs functions
   getFile(query);
   getTime(query);
   readFile(query, record);
   fileSearch(query, record);
   display(query, record);

   return 0;
}

/**********************************************************************
 * gets file name -- passes structure by reference
 ***********************************************************************/
void getFile(Query &query)
{
   cout << "Enter the access record file: ";
   cin >> query.accessRecord;
   cout << endl;
}

/**********************************************************************
 * gets time frames for searching -- passes structure by reference
 ***********************************************************************/
void getTime(Query &query)
{
   cout << "Enter the start time: ";
   cin >> query.startTime;
   cout << "Enter the end time: ";
   cin >> query.endTime;
}

/**********************************************************************
 * populates records array -- passes structure by reference
 ***********************************************************************/
void readFile(Query &query, AccessRecord record[MAX_RESULTS])
{
   query.fileLength = 0; //initialized here to for ease

   //attempts to open the file and returns error if unable to open
   ifstream fin(query.accessRecord);
   if (fin.fail())
   {
      cout << "Unable to open: "
           << query.accessRecord
           << endl;
   }

   // populates the array of records with the information from the file
   while ((!fin.eof()) || (query.fileLength < MAX_RESULTS))
   {
      fin >> record[query.fileLength].fileName;
      fin >> record[query.fileLength].userName;
      fin >> record[query.fileLength].timeStamp;
      query.fileLength++;
   }

   //closes the file
   fin.close();
}

/**********************************************************************
 * searches records array for results within time frame -- passes structure by
 *      reference
 ***********************************************************************/
void fileSearch(Query &query, AccessRecord record[MAX_RESULTS])
{
   query.resultCount = 0; //initialized here to for ease

   //iterate over record array and identify valid entries based on
   // start/endTime
   for (int i = 0; i < query.fileLength; ++i)
   {
      if ((query.startTime <= record[i].timeStamp) && (query.endTime >=
         record[i].timeStamp))
      {
         query.results[query.resultCount] = i;
         query.resultCount++;
      }
   }
}

/**********************************************************************
 * displays results -- passes structure by reference
 ***********************************************************************/
void display(Query &query, AccessRecord record[MAX_RESULTS])
{
   cout << endl;
   cout << "The following records match your criteria:" << endl;
   cout << endl;
   cout << setw (15) << "Timestamp" << setw (20) << "File" << setw (20)
        << "User" << endl;
   cout << "--------------- ------------------- -------------------" << endl;

   for (int i = 0; i < query.resultCount; ++i)
   {
      cout << setw (15) << record[query.results[i]].timeStamp << setw (20)
           << record[query.results[i]].fileName << setw (20)
           << record[query.results[i]].userName << endl;
   }

   cout << "End of records"
        << endl;
}