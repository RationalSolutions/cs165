//
// Created by coby on 11/5/2019.
//

#ifndef CIRCLE_H
#define CIRCLE_H


class Circle : public Point
{
private:
   float rad;

public:
   void setRad(float rad){this->rad = rad;}
   float getRad() const { return rad;}

   void promptForCircle();
   void display() const;
};


#endif //CIRCLE_H
