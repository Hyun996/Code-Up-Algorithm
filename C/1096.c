#include <stdio.h>

int main()
{
    int n = 0, x = 0, y = 0;
    int numArr[19][19] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        numArr[x-1][y-1] = 1;   
    }
    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++){
            printf("%d ", numArr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


