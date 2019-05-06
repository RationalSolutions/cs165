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
*    Actual:     3.75 hrs
*      Trying to figure out how I was going to manage the data for the query.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

const int MAX_BUFFER = 256;
const int MAX_RESULTS = 500;

struct AccessRecord
{
   long int timeStamp;
   char fileName[MAX_BUFFER];
   char user[MAX_BUFFER];
};

struct Query
{
   long int startTime;
   long int endTime;
   char accessRecord[MAX_BUFFER];
   int fileLength;
   int results[MAX_RESULTS];
   int resultCount;
};

void getFile (Query &q)
{
   cout << "Enter the access record file: ";
   cin >> q.accessRecord;
   cout << endl;

}

void getTime (Query &q)
{
   cout << "Enter the start time: ";
   cin >> q.startTime;
   cout << "Enter the end time: ";
   cin >> q.endTime;

}

void readFile (Query &q, AccessRecord record[MAX_RESULTS])
{
   int q.fileLength = 0;

   ifstream fin (q.accessRecord);

   if (fin.fail ())
   {
      cout << "Unable to open: " << q.accessRecord << endl;
   }

   while (!fin.eof ())
   {
      fin >> record[q.fileLength].fileName;
      fin >> record[q.fileLength].user;
      fin >> record[q.fileLength].timeStamp;
      q.fileLength++;
   }

   fin.close ();
}

void fileSearch (Query &q, AccessRecord record[MAX_RESULTS])
{
   q.resultCount = 0;

   for (int i = 0; i < q.fileLength; ++i)
   {
      if (q.startTime <= record[i].timeStamp &&
          q.endTime >= record[i].timeStamp)
      {
         q.results[q.resultCount] = i;
         q.resultCount++;
      }

   }
}

void display (Query &q, AccessRecord record[MAX_RESULTS])
{
   cout << endl;
   cout << "The following records match your criteria:" << endl;
   cout << endl;
   cout << setw (15) << "Timestamp" << setw (20) << "File" << setw (20)
        << "User" << endl;
   cout << "--------------- ------------------- -------------------" << endl;

   for (int i = 0; i < q.resultCount; ++i)
   {
      cout << setw (15) << record[q.results[i]].timeStamp << setw (20)
           << record[q.results[i]].fileName << setw (20)
           << record[q.results[i]].user << endl;
   }

   cout << "End of records" << endl;
}

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main ()
{
   Query q;
   AccessRecord record[MAX_RESULTS];

   filePrompt (q);
   timePrompt (q);
   readFile (q, record);
   fileSearch (q, record);
   displayResults (q, record);

   return 0;
}
