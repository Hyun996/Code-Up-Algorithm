#include <stdio.h>

int main()
{
    int i = 0, j = 0, n = 0, m = 0;
    scanf("%d %d", &n, &m);
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}

