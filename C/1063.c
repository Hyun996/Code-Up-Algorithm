#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d", a>b ? a:b);  // 두 값 중 큰 값을 출력
    return 0;  
}