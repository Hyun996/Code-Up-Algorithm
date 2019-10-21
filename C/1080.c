#include <stdio.h>

int main()
{
    int i = 0, n = 0, sum = 0;
    scanf("%d", &n);
    while(sum < n){
        i++;
        sum += i;
    }
    printf("%d", i);
    return 0;
}

