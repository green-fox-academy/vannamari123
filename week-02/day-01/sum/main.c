// Write a function called `sum` that sum all the numbers
// until the given parameter which you store in a .h file


#include <stdio.h>
#include <stdlib.h>
#include "limit_number.h"


int sum(int num1, int num2);

int main()
{
    printf("%d \n", sum(LIMIT_LOWER, LIMIT_UPPER));

    return 0;
}


int sum(int num1, int num2)
{
    int seq_sum = ((num1 + num2) * (abs(num1 - num2) + 1))/2;
    return seq_sum;
}
