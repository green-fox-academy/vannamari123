#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ 
    uint8_t i=1;
    while (i<100){
        if(i%3==0){
            if(i%5==0){
                printf("FizzBuzz \n");
            } else {
                printf("Fizz \n");
            }
        } else if(i%5==0){
                   printf("Buzz \n");
               } else {
                   printf("%d \n", i);
               }
        i++;
    }
return 0;
}
