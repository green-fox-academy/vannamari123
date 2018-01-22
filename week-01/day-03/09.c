#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//09.c
int main()
{
    int i = 53625;
    int d = i % 11;
    if (d == 0) {
        printf("11 is a divisor.");
     } else {
        printf("11 is not a divisor.");
     }
     return 0;
}
