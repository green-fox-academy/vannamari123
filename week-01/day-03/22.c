#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//22.c

int main(
{
    uint8_t ac = 9;
    uint8_t time = 220;
    uint8_t out;
    if(ac%4 == 0){
        if(time>=200){
            out=0b010;
        } else {
            out=0b100;
        }
    } else {
          out=0b001;
    }
    printf("%d \n", out);

return 0;
}
