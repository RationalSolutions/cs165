//
// Created by Coby Jenkins on 2019-05-04.
//

#include <iostream>
using namespace std;

const int MAX_RELATIVES = 50;
const int MAX_SEQ_LENGTH = 10;
const int MAX_BUFFER = 256;



void getSequence(char userSequence[MAX_SEQ_LENGTH])
{
   cout << "Enter your DNA sequence: ";
   cin.getline (userSequence, MAX_SEQ_LENGTH);

}

int getRelativeCount()
{
   int relativeCount = 0;

   cout << "Enter the number of potential relatives: ";
   cin >> relativeCount;
   cout << endl;

   return relativeCount;
}

void getRelativeNames(int relativeCount, char relativeNames [][MAX_BUFFER])
{
   for (int i = 0; i < relativeCount; ++i) {
      cout << "Please enter the name of relative #" << i+1 << ": ";
      cin.getline (relativeNames[i], MAX_BUFFER);
   }
}

void getRelativeSequence(int relativeCount, char relativeSequence [][MAX_SEQ_LENGTH], char relativeNames [][MAX_BUFFER])
{
   for (int i = 0; i < relativeCount; ++i) {
      cout << "Please enter the DNA sequence for " << relativeNames[i] << ": ";
      cin.getline (relativeSequence[i], MAX_SEQ_LENGTH);
   }
}

void displayResults(char userSequence [MAX_SEQ_LENGTH], char relativeNames [][MAX_BUFFER],
      char relativeSequence [][MAX_SEQ_LENGTH], int relativeCount)
{
   for (int i = 0; i < relativeCount ; ++i) {
      int matchCount = 0;
      double matchPercent = 0;

      for (int j = 0; j < MAX_SEQ_LENGTH ; ++j) {
         if (relativeSequence [j] == userSequence [j])
         {
            matchCount++;
         }

      }

      matchPercent = (double)((matchCount / MAX_SEQ_LENGTH) * 100)

      cout << "Percent match for " << relativeNames [i] << ": " << matchPercent << "%\n";

   }
}

int main()
{
   char userSequence [MAX_SEQ_LENGTH];
   char relativeNames [MAX_RELATIVES][MAX_BUFFER];
   char relativeSequence [MAX_RELATIVES][MAX_SEQ_LENGTH];
   int relativeCount;

   getSequence (userSequence);
   relativeCount = getRelativeCount();
   getRelativeNames (relativeCount, relativeNames);
   getRelativeSequence (relativeCount, relativeSequence, relativeNames);
   displayResults (userSequence, relativeNames, relativeSequence, relativeCount);

   return 0
}