#include <stdio.h>

int main()
{
    long long int h = 0, b = 0, c = 0, s = 0;
    scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
    printf("%0.1lf MB", (double)(h*b*c*s)/(1024*1024*8));
    return 0;
}