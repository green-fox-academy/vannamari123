#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//21.c

int main()
{
    uint8_t ab = 123;
    uint8_t credits = 90;
    uint8_t is_bonus = 1;
    if(is_bonus == 0){
        if(credits>=50) {
            ab=ab-2;
        } else {
            ab=ab-1;
        }
     }
        printf("%d \n", ab);
return 0;
}

