#include <stdio.h>

int main()
{
    char data[2001] = {0};
    fgets(data, 2000, stdin);
    printf("%s", data);
    return 0;
} // fgets() : 공백 문자가 포함되어 있는 문장을 입력받아 저장 가능
