#include <stdio.h>

int main()
{
    int n = 0, i = 0, sum = 0;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum += i;
        if(sum>=n){
            break;
        }
    }
    printf("%d", sum);
    return 0;
}
