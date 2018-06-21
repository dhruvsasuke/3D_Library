//
// Created by Krishna on 21-06-2018.
//

#include "plane.h"
#include "point.h"
#include "line.h"

float dist(point p1, point p2) {
    float x,y,z;
    x=(p1.getX())-(p2.getX());
    y=(p1.getY())-(p2.getY());
    z=(p1.getZ())-(p2.getZ());
    float dist=sqrtf((x*x)+(y*y)+(z*z));
    return dist;
}

float dist(point p) {
    float dist=sqrtf((p.getX())*(p.getX())+(p.getY())*(p.getY())+(p.getZ())*(p.getZ()));
}

plane planeThroughPoints(point p1, point p2, point p3){
    float p12x,p12y,p12z,p23x,p23y,p23z;
    plane p;
    p12x=p1.getX()-p2.getX();   p12y=p1.getY()-p2.getY();   p12z=p1.getZ()-p2.getZ();
    p23x=p2.getX()-p3.getX();   p23x=p2.getY()-p3.getY();   p23x=p2.getY()-p3.getY();
    p.setA((p12y*p23z)-(p12z-p23y));
    p.setB(-(p12x*p23z)+(p12z-p23x));
    p.setC((p12x*p23y)-(p12y-p23x));
    p.setD(-(p.getA()*p1.getX()+p.getB()*p1.getY()+p.getC()*p1.getZ()));
    return p;
}

float dist(plane p,point a){
    float xpo,ypo,zpo,ap,bp,cp,dp,distance;
    xpo=a.getX();   ypo=a.getY();   zpo=a.getZ();
    ap=p.getA();    bp=p.getB();    cp=p.getC();    dp=p.getD();
    distance=(ap*xpo+bp*ypo+cp*zpo+dp)/(ap*ap+bp*bp+cp*cp);
    return abs(distance);
}

float dist(plane p1, plane p2){
    float p1a,p1b,p1c,p1d,p2a,p2b,p2c,p2d;
    p1a=p1.getA();  p1b=p1.getB();  p1c=p1.getC();  p1d=p1.getD();
    p2a=p2.getA();  p2b=p2.getB();  p2c=p2.getC();  p2d=p2.getD();
    if(((p1a/p2a)==(p1b/p2b))&&((p1a/p2a)==(p1c/p2c))&&((p1a/p2a)==(p1d/p2d))){
        point tmp(0,0,-p1d/p1c);
        return dist(p2,tmp);
    }
    else
        return 0.0;
}

float dist(line l,point p){
    float v1x,v1y,v1z,v2x,v2y,v2z,nx,ny,nz;
    v1x=l.getX1()-p.getX(); v1y=l.getY1()-p.getY(); v1z=l.getZ1()-p.getZ();
    v2x=l.getA();   v2y=l.getB();   v2z=l.getC();
    nx=v1y*v2z-v1z*v2y; ny=-(v1x*v2z-v1z*v2x); nz=(v1x*v2y-v1y*v2x);
    return sqrtf((nx*nx+ny*ny+nz*nz)/(v2x*v2x+v2y*v2y+v2z*v2z));
}

float dist(line l1,line l2){

}

float dist(line l, plane p){
    float la,lb,lc,lx1,ly1,lz1,pa,pb,pc,pd;
    la=l.getA();    lb=l.getB();    lc=l.getC();
    lx1=l.getX1();    ly1=l.getY1();    lz1=l.getZ1();
    pa=p.getA();    pb=p.getB();    pc=p.getC();    pd=p.getD();
    if((pa*la+pb*lb+pc*lc)==0){

    }
    else
        return 0.0;
}

point intersection(line l1, line l2){

}

point intersection(line l, plane p){

}

line intersection(plane p1, plane p2){

}

