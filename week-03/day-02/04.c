#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//TODO: print out the value of pi, first as a string, then a float value.

int main()
{
    float val = M_PI;
    char str[5];
    strcpy(str, "3.14");

    printf ("%s\n", str);
    printf("%f\n", val);

    return(0);
}
