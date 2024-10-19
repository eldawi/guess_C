#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNum = 5;
    int guess;

    while(secretNum != guess){
        printf("num: ");
        scanf("%d", &guess);
    }
    printf("you win");
    return 0;
}
