//
// Created by coby on 11/5/2019.
//

#include "circle.h"

#include <iostream>
using namespace std;

void Circle::promptForCircle()
{
   promptForPoint();

   cout << "Enter radius: ";
   cin >> rad;
}

void Circle::display() const
{
   Point::display();

   cout << " - Radius: " << rad;
}