#include <stdio.h>

int main()
{
    int result = 0;
    int a = 0, d = 0, n = 0;
    scanf("%d %d %d", &a, &d, &n);    
    result = a;
    for(int i=2; i<=n; i++){ 
        result += d;
    } 
    printf("%d", result);
    return 0;    
}