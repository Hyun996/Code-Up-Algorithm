#include <stdio.h>

int main()
{
    int n = 0;
    int min = 0;
    int num[10000] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &num[i]);        
    }
    min = num[0];
    for (int i = 0; i < n; i++){
        if(min > num[i]){
            min = num[i];
        }
    }
    printf("%d", min);
    return 0;
}
