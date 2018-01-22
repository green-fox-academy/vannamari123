#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//11.c

int main()
{
    int k = 1521;
    int x = k % 3;
    int y = k % 5;
    if (x == 0) {
 	      printf("The number is divisible by 3.");
    } else {
 	      printf("The number is not divisible by 3.");
    }
    if ( y== 0) {
 	      printf ("The number is divisible by 5.");
	  } else {
 	    printf("The number is not divisable by 5.");
    }
    return 0;
}
