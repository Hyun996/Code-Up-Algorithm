#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    scanf("%d", &n); 
reget:
    scanf("%d", &m); 
    printf("%d\n", m);    
    n--;
    if(n != 0){
        goto reget;
    }
    return 0;
}