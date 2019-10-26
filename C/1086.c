#include <stdio.h>

int main()
{
    long long int w = 0, h = 0, b = 0;
    scanf("%lld %lld %lld", &w, &h, &b);
    printf("%0.2lf MB", (double)(w*h*b)/(1024*1024*8));
    return 0;
}
