#include <stdio.h>

int main()
{
    int n = 0;
    int num[10000] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    for(int i=n-1; i>=0; i--){
        printf("%d ", num[i]);
    }
    return 0;
}

