#include <iostream>
#include <cmath>

int adiff(int A,int B){
    int c;
    c= abs(A-B);
    c=c%360;
    if(c>180){
    c=360-c;
    return c;
    }
    return c;
}