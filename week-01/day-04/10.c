#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int temperature = 25;
    if (temperature<=20){
        printf("It's too cold to turn AC on. \n");
    } else if (temperature>20 && temperature<=24) {
            printf("It's up to you to turn the AC on. \n");
           } else {
            printf("Turn the AC on, you're boiling!\n");
        }
    
    return 0;
}

