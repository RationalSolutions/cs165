/***********************************************************************
* Program:
*    Assignment 01, Genetic Genealogy
*    Brother Alvey, CS165
* Author:
*    Coby Jenkins
* Summary: 
*    Compares provided DNA sequences and determins how similar they are to
*    each other.
*
*    Estimated:  4.0 hrs
*    Actual:     3.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>

using namespace std;

const int MAX_RELATIVES = 50;
const int MAX_SEQ_LENGTH = 10;
const int MAX_BUFFER = 256;

/**********************************************************************
* Gets the users DNA sequence
***********************************************************************/
void getSequence(char dnaSequence[][MAX_SEQ_LENGTH])
{
   cout << "Enter your DNA sequence: ";
   cin >> dnaSequence[0];

}

/**********************************************************************
* Gets the number of relatives being compared
***********************************************************************/
int getRelativeCount()
{
   int relativeCount = 0;

   cout << "Enter the number of potential relatives: ";
   cin >> relativeCount;
   cout << endl;

   return relativeCount;
}

/**********************************************************************
* Gets the names of relatives being compared
***********************************************************************/
void getRelativeNames(int relativeCount, char relativeNames[][MAX_BUFFER])
{
   for (int i = 0; i < relativeCount; ++i)
   {
      cout << "Please enter the name of relative #" << i + 1 << ": ";
      cin >> relativeNames[i];
   }

   cout << endl;
}

/**********************************************************************
* Gets the relatives DNA sequence
***********************************************************************/
void getSequence(int relativeCount, char dnaSequence[][MAX_SEQ_LENGTH],
            char relativeNames[][MAX_BUFFER])
{
   for (int i = 0; i < relativeCount; ++i)
   {
      cout << "Please enter the DNA sequence for " << relativeNames[i] << ": ";
      cin >> dnaSequence[i + 1];
   }

   cout << endl;
}

/**********************************************************************
* Gets the relatives DNA sequence
***********************************************************************/
void displayResults(
                    char relativeNames[][MAX_BUFFER],
                    char dnaSequence[][MAX_SEQ_LENGTH],
                    int relativeCount)
{
   int matchCount;
   int matchPercent[MAX_RELATIVES];

   for (int i = 0; i < relativeCount; ++i)
   {
      matchCount = 0;

      for (int j = 0; j < MAX_SEQ_LENGTH; ++j)
      {
         if (dnaSequence[i + 1][j] == dnaSequence[0][j])
         {
            matchCount++;
         }
      }

      matchPercent[i] = matchCount * 10;
   }

   for (int k = 0; k < relativeCount ; ++k)
   {
      cout << "Percent match for " << relativeNames[k]
           << ": " << matchPercent[k] << "%\n";
   }
}

/**********************************************************************
* calls the appropriate methods to run the application
***********************************************************************/
int main()
{

   char relativeNames[MAX_RELATIVES + 1][MAX_BUFFER];
   char dnaSequence[MAX_RELATIVES + 1][MAX_SEQ_LENGTH];
   int relativeCount;

   getSequence(dnaSequence);
   relativeCount = getRelativeCount();
   getRelativeNames(relativeCount, relativeNames);
   getSequence(relativeCount, dnaSequence, relativeNames);
   displayResults(relativeNames, dnaSequence, relativeCount);

   return 0;
}