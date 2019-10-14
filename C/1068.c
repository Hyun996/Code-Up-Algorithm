#include <stdio.h>

int main()
{
    int score = 0;
    scanf("%d", &score);
    if(score>=90){
        printf("%s", "A");
    }
    else if(score>=70){
        printf("%s", "B");
    }
    else if(score>=40){
        printf("%s", "C");
    }
    else{
        printf("%s", "D");
    }
    return 0;
}

