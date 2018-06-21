//
// Created by Krishna on 11-06-2018.
//

#include "point.h"
#include <point.h>

#ifndef INC_3D_LIBRARY_PLANE_H
#define INC_3D_LIBRARY_PLANE_H

#endif //INC_3D_LIBRARY_PLANE_H

class plane{
private:
    float a,b,c,d;
public:
    plane(float, float, float, float);
    ~plane();
    float getA();
    float getB();
    float getC();
    float getD();
    void setA(float a);
    void setB(float b);
    void setC (float c);
    void setD (float d);
    inline plane operator+(plane p);
    inline plane operator-(plane p);


};

plane::plane(float a, float b, float c, float d) {
    this->a=a;
    this->b=b;
    this->c=c;
    this->d=d;
}

float plane::getA(){
    return this->a;
}

float plane::getB(){
    return this->b;
}

float plane::getC(){
    return this->c;
}

float plane::getD(){
    return this->d;
}

void plane::setA(float a){
    this->a=a;
}

void plane::setB(float b){
    this->b=b;
}

void plane::setC(float c){
    this->c=c;
}

void plane::setD(float d){
    this->d=d;
}

plane plane::operator+(plane p){
    a+=p.a;
    b+=p.b;
    c+=p.c;
    d+=p.d;
    return *this;
}

plane plane::operator-(plane p){
    a-=p.a;
    b-=p.b;
    c-=p.c;
    d-=p.d;
    return *this;
}

