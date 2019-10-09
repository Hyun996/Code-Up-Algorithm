#include <stdio.h>

int main(){
    int year = 0, month = 0, day = 0;
    scanf("%d.%d.%d", &year, &month, &day);
    printf("%02d-%02d-%04d", day, month, year);
    return 0;
}