
#include <stdio.h>
#include <stdlib.h>
#include "variables.h"

// Create a function called `printer`
// which prints the input parameters
// can have multiple number of arguments
// store your variables in a .h file

void printer();

int main()
{
    printer(NR1, NR2, NR3);
    printer(34, 45, 65);
    return 0;
}

void printer(int a, int b, int c){
    printf ("%d %d %d\n", a, b, c);
}
