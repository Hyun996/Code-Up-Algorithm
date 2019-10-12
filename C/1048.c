#include <stdio.h>

int main()
{
    long long int a = 0, b = 0;
    scanf("%lld %lld", &a, &b);
    printf("%lld", a<<b); // a값을 b배 한 값 출력
    return 0;
}

