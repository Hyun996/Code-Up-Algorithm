#include <stdio.h>

int main()
{
    int n = 0;
    int t = 0;
    int num[23] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        num[t - 1] = num[t - 1] + 1;
    }
    for (int i = 0; i < (sizeof(num) / sizeof(int)); i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}