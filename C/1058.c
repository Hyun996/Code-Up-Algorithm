#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d", (!a&&!b)); 
    return 0;
}

/*
a  b    a&&b  !a&&!b    a&&b || !a&&!b
0  0     0       1           1  
0  1     0       0           0
1  0     0       0           0
1  1     1       0           1
*/