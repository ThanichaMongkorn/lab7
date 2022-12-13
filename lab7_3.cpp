#include <iostream>
#include <cmath>

int adiff(int A,int B){
    int c;
    c= Abs(A-B);
    if(c>180){
    c=360-c;
    return c;
    }
    return c;
}