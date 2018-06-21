//
// Created by Krishna on 20-06-2018.
//

#ifndef INC_3D_LIBRARY_LINE_H
#define INC_3D_LIBRARY_LINE_H

#endif //INC_3D_LIBRARY_LINE_H

#include "plane.h"



class line{
private:
    float a,b,c,x1,y1,z1;
public:
    //line(float, float, float);
    ~line();
    void setA(float a);
    void setB(float b);
    void setC(float c);
    void setX1(float x1);
    void setY1(float y1);
    void setZ1(float z1);
    float getA();
    float getB();
    float getC();
    float getX1();
    float getY1();
    float getZ1();
};

/*line::line(float a, float b, float c) {
    this->a=a;
    this->b=b;
    this->c=c;
}*/

void line::setA(float a){
    this->a=a;
}

void line::setB(float b){
    this->b=b;
}

void line::setC(float c){
    this->c=c;
}

void line::setX1(float x1){
    this->x1=x1;
}

void line::setY1(float y1){
    this->y1=y1;
}

void line::setZ1(float z1){
    this->z1=z1;
}

float line::getA(){
    return this->a;
}

float line::getB(){
    return this->b;
}

float line::getC(){
    return this->c;
}

float line::getX1(){
    return this->x1;
}

float line::getY1(){
    return this->y1;
}

float line::getZ1(){
    return this->z1;
}

