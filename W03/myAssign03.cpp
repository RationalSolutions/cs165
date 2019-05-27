/***********************************************************************
* Program:
*    Assignment 03, Digital Forensics
*    Brother Alvey, CS165
* Author:
*    Coby Jenkins
* Summary: 
*    E Write a program to scan through a log to identify users who accessed
 *    files in a particular window of time
*
*    Estimated:  4.0 hrs
*    Actual:     8.0 hrs
*      figuring out how to split the read file method appropriately to meet
 *      the requirements.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

const int MAX_BUFFER = 256;
const long int MAX_TIMESTAMP = 10000000000;
const long int MIN_TIMESTAMP = 1000000000;
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

/**********************************************************************
* gets file name
***********************************************************************/
void getFile(Query &q)
{
   cout << "Enter the access record file: ";
   cin >> q.accessRecord;


}

/**********************************************************************
* gets time frames for searching
***********************************************************************/
void getTime(Query &q)
{
   cout << "Enter the start time: ";
   cin >> q.startTime;
   cout << "Enter the end time: ";
   cin >> q.endTime;

}

/**********************************************************************
* parses file lines
***********************************************************************/
void parseLine(Query &q, AccessRecord record[MAX_RESULTS], string line)
{

   stringstream ss;
   ss.str(line);

   ss >> record[q.fileLength].fileName;
   if (ss.fail())
      throw string("no filename on line");

   ss >> record[q.fileLength].user;
   if (ss.fail())
      throw string("no username on line");

   ss >> record[q.fileLength].timeStamp;
   if (ss.fail())
      throw string("Timestamp is invalid/not found");
   if (record[q.fileLength].timeStamp < MIN_TIMESTAMP)
      throw string("Timestamp is not long enough");
   if (record[q.fileLength].timeStamp > MAX_TIMESTAMP)
      throw string("Timestamp is too long");

}

/**********************************************************************
* Reads file provides by user
***********************************************************************/
void parseFile(Query &q, AccessRecord record[MAX_RESULTS]) throw(string)
{
   q.fileLength = 0;
   string lineToBeParsed;

   ifstream fin(q.accessRecord);

   if (fin.fail())
   {
      cout << "Unable to open: " << q.accessRecord << endl;
   }

   while (getline(fin, lineToBeParsed))
   {
      try
      {
         parseLine(q, record, lineToBeParsed);
         q.fileLength++;
      }
      catch (string err)
      {
         cout << "Error parsing line: " << lineToBeParsed << endl;
      }

   }
   fin.close();
   return;
}

/**********************************************************************
 * searches records array for results within time frame
 ***********************************************************************/
void fileSearch(Query &q, AccessRecord record[MAX_RESULTS])
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

/**********************************************************************
 * displays results
 ***********************************************************************/
void display(Query &q, AccessRecord record[MAX_RESULTS])
{
   cout << endl;
   cout << "The following records match your criteria:" << endl;
   cout << endl;
   cout << setw(15) << "Timestamp" << setw(20) << "File" << setw(20)
        << "User" << endl;
   cout << "--------------- ------------------- -------------------" << endl;

   for (int i = 0; i < q.resultCount; ++i)
   {
      cout << setw(15) << record[q.results[i]].timeStamp << setw(20)
           << record[q.results[i]].fileName << setw(20)
           << record[q.results[i]].user << endl;
   }

   cout << "End of records" << endl;
}

/**********************************************************************
 * entry point for application
 ***********************************************************************/
int main()
{
   Query q;
   AccessRecord record[MAX_RESULTS];

   getFile(q);
   parseFile(q, record);
   cout << endl;

   getTime(q);
   fileSearch(q, record);

   display(q, record);

   return 0;
}