#include <float.h>
float add(float x, float y){
    return x+y;
}
float sub(float x, float y){
    return x-y;
}
double mul(double x, int y){
    return x*y;
}
double div(double x, int y){
    if(y==0){
        return __DBL_MAX__;
    }
    return x/y;
}