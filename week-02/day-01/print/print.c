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
    printer();
    return 0;
}

void printer(){
    printf ("Name: %s \nFamily name: %s \n" , NAME, FAMILY_NAME);
    printf ("Occupation: %s \n", OCCUPATION);
    printf ("Year of birth: %d \n", YEAR_OF_BIRTH);
}
