/***********************************************************************
* Program:
*    Assignment ##, ????          (e.g. Assignment 01, Hello World)  
*    Brother Alvey, CS165
* Author:
*    Coby Jenkins
* Summary: 
*    Enter a brief description of your program here!  Please note that if
*    you do not take the time to fill out this block, YOU WILL LOSE POINTS.
*    Before you begin working, estimate the time you think it will
*    take you to do the assignment and include it in this header block.
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;

const int MAX_BUFFER = 256;
const long int MAX_TIMESTAMP = 10000000000;
const long int MIN_TIMESTAMP = 1000000000;
const int MAX_RESULTS = 500;

struct AccessRecord {
   long int timeStamp;
   char fileName[MAX_BUFFER];
   char user[MAX_BUFFER];
};

struct Query {
   long int startTime;
   long int endTime;
   char accessRecord[MAX_BUFFER];
   int fileLength;
   int results[MAX_RESULTS];
   int resultCount;
};

/**********************************************************************
gets file name
***********************************************************************/
void getFile(Query &q) {
   cout << "Enter the access record file: ";
   cin >> q.accessRecord;

}

/**********************************************************************
gets time frames for searching
***********************************************************************/
void getTime(Query &q) {
   cout << "Enter the start time: ";
   cin >> q.startTime;
   cout << "Enter the end time: ";
   cin >> q.endTime;

}

/**********************************************************************
parses file lines
***********************************************************************/
void parseLine(Query &q, AccessRecord record[MAX_RESULTS], string line) {

   stringstream ss(line);

   while (!ss.eof()) {
      ss >> record[q.fileLength].fileName;
      ss >> record[q.fileLength].user;
      ss >> record[q.fileLength].timeStamp;

      if (record[q.fileLength].timeStamp > MAX_TIMESTAMP |
          record[q.fileLength].timeStamp < MIN_TIMESTAMP) {
         cout << "Error parsing line: " << record[q.fileLength].fileName << " "
              << record[q.fileLength].user << " "
              << record[q.fileLength].timeStamp << endl;
      }

      if (ss.fail()) {
         cout << "Error parsing line: " << record[q.fileLength].fileName << " "
              << record[q.fileLength].user << " "
              << record[q.fileLength].timeStamp << endl;
      }
   }
}

/**********************************************************************
Reads file provides by user
***********************************************************************/
void parseFile(Query &q, AccessRecord record[MAX_RESULTS]) {
   q.fileLength = 0;

   ifstream fin(q.accessRecord);

   if (fin.fail()) {
      cout << "Unable to open: " << q.accessRecord << endl;
   }

   while (!fin.eof()) {
      string lineToBeParsed;
      getline(fin, lineToBeParsed);
      parseLine(q, record, lineToBeParsed);
      q.fileLength++;
   }
   fin.close();
   return;
}

/**********************************************************************
 * searches records array for results within time frame
 ***********************************************************************/
void fileSearch(Query &q, AccessRecord record[MAX_RESULTS]) {
   q.resultCount = 0;

   for (int i = 0; i < q.fileLength; ++i) {
      if (q.startTime <= record[i].timeStamp &&
          q.endTime >= record[i].timeStamp) {
         q.results[q.resultCount] = i;
         q.resultCount++;
      }

   }
}

/**********************************************************************
 * displays results
 ***********************************************************************/
void display(Query &q, AccessRecord record[MAX_RESULTS]) {
   cout << endl;
   cout << "The following records match your criteria:" << endl;
   cout << endl;
   cout << setw(15) << "Timestamp" << setw(20) << "File" << setw(20)
        << "User" << endl;
   cout << "--------------- ------------------- -------------------" << endl;

   for (int i = 0; i < q.resultCount; ++i) {
      cout << setw(15) << record[q.results[i]].timeStamp << setw(20)
           << record[q.results[i]].fileName << setw(20)
           << record[q.results[i]].user << endl;
   }

   cout << "End of records" << endl;
}

/**********************************************************************
 * entry point for application
 ***********************************************************************/
int main() {
   Query q;
   AccessRecord record[MAX_RESULTS];

   getFile(q);
   parseFile(q, record);

   getTime(q);
   fileSearch(q, record);

   display(q, record);

   return 0;
}