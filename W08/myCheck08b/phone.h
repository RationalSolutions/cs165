/***************
 * phone.h
 ***************/

#ifndef PHONE_H
#define PHONE_H

class Phone
{
private:
   int areaCode;
   int prefix;
   int suffix;

public:
   void promptNumber();
   void display();
};

#endif
