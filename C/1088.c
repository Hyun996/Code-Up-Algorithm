#include <stdio.h>

int main()
{
    int n = 0, i = 0;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(i%3==0){
            continue;
        }
        printf("%d ", i);
    }
}

