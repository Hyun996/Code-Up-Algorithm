#include <stdio.h>

int main()
{
    long long int result = 0;
    int a = 0, r = 0, n = 0;
    scanf("%d %d %d", &a, &r, &n);    
    result = a;
    for(int i=2; i<=n; i++){ 
        result *= r;
    } 
    printf("%lld", result);
    return 0;    
}