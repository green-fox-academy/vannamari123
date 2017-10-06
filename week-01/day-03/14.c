#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//14.c

int main()
{
 uint8_t number = 254;
 uint8_t result = 0 ;
 result = number + 23;

 printf("%d \n", result);
 
 uint16_t result_16 = number + 23;
 printf("%d \n", result_16);
 
 // What happened and why?
 //The uint8_t type was not large enough to store the result.
 
 int8_t number_negative = number;
 printf("%d \n", number_negative);
 
 return 0;
 }


