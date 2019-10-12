#include <stdio.h>

int main()
{
    long long int a = 0, b = 0, c = 0;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld\n", a+b+c);
    printf("%0.1lf", (double)(a+b+c)/3);
    return 0;
}

