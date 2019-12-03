/*****************************************************
 * File: pair.h
 *
 * Purpose: Defines a Pair template class that can hold
 *   two items of arbitrary data types.
 ******************************************************/

#ifndef PAIR_H
#define PAIR_H

#include <iostream>

template <class T1, class T2>
class Pair
{
private:
   T1 first;
   T2 second;

public:
   T1 getFirst() const { return first;}
   T2 getSecond() const { return second;}
   void setFirst(const T1 & value){first = value;}
   void setSecond(const T2 & value){second = value;}

   void display(){cout << first << " - " << second;}

};



#endif // PAIR_H
