#include <stdio.h>
#include <stdlib.h>
#include "names.h"


// define a variable and assign the value `Greenfox` to it in a .h file
// create a function called `greet` that greets it's input parameter
// define more names to greet, call the function multiple times


#include <stdio.h>

void greet(char name[]);

int main () {
    
    greet("Peter");
    greet(TO_GREET1);
    greet(TO_GREET2);
   
    return 0;
}

void greet(char name[]){
    printf("Hello %s\n", name);
}
