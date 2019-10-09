#include <stdio.h>

int main(){
    double d = 0; // double(long float) 형식
    scanf("%lf", &d);
    printf("%.11lf", d);
    return 0;
}