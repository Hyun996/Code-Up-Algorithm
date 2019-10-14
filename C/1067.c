#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);
    if(a>=0){
        if(a%2==0){
            printf("%s", "plus\neven");
        }
        else{
            printf("%s", "plus\nodd");
        }
    }
    else{
        if(a%2==0){
            printf("%s", "minus\neven");
        }
        else{
            printf("%s", "minus\nodd");
        }
    }
    return 0;
}

