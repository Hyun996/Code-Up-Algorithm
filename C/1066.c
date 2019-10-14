#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if(a%2==0){
        printf("%s\n", "even");
    } 
    else{
        printf("%s\n", "odd");
    }
    if(b%2==0){
        printf("%s\n", "even");
    } 
    else{
        printf("%s\n", "odd");
    }
    if(c%2==0){
        printf("%s\n", "even");
    } 
    else{
        printf("%s\n", "odd");
    }
    return 0;
}

