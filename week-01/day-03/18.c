#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//18.c
int main()
{
    uint16_t number = 254;
    if (number > 255){
        printf ("longer than 8bits");
    }else {
        printf("ok");
    }
return 0;
}

