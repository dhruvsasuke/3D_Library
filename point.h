//
// Created by Krishna on 08-06-2018.
//

#include <math.h>

#ifndef INC_3D_LIBRARY_POINT_H
#define INC_3D_LIBRARY_POINT_H

#endif //INC_3D_LIBRARY_POINT_H

class point{
private:
    float x,y,z;
public:
    point(float, float, float);
    ~point();
    inline point operator+(point p);
    inline point operator-(point p);
    float getX() const ;
    float getY() const;
    void setX(float x);
    float getZ() const;
    void setY(float y);
    void setZ(float z);
};

point::point(float x, float y, float z) {
    point::x=x;
    point::y=y;
    point::z=z;
}

float point::getX() const {
    return x;
}

float point::getY() const {
    return y;
}

float point::getZ() const {
    return z;
}

void point::setX(float x){
    this->x=x;
}

void point::setY(float y){
    this->y=y;
}

void point::setZ(float z) {
    this->z=z;
}

point point::operator+(point p){
    x+=p.x;
    y+=p.y;
    z+=p.z;
}

point point::operator-(point p) {
    x-=p.x;
    y-=p.y;
    z-=p.z;
}

