#include <stdio.h>

int main()
{
    long long int result = 0;
    int a = 0, d = 0, m = 0, n = 0;
    scanf("%d %d %d %d", &a, &m, &d, &n);    
    result = a;
    for(int i=2; i<=n; i++){ 
        result *= m;
        result += d;
    } 
    printf("%lld", result);
    return 0;    
}