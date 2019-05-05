/***********************************************************************
* Program:
*    Checkpoint 01b, Arrays  
*    Brother Alvey, CS165
* Author:
*    Coby Jenkins
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

int getSize()
{
    int size;
    
    cout << "Enter the size of the list: ";
    cin >> size;
    
    return size;
}

void getList(int list[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number for index " << i << ": ";
        cin >> list[i];
    }
    
    cout << endl;
}

void displayMultiples(int list[], int size)
{
    cout << "The following are divisible by 3:\n";
    
    for (int i = 0; i < size; i++)
    {
        if (list[i] % 3 == 0)
        {
            cout << list[i] << endl;
        }
    }
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   int size = getSize();
   int list[size];
   
   getList(list, size);
   
   displayMultiples(list, size);
   
   return 0;
}
