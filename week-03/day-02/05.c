#include <stdio.h>
#include <string.h>

//TODO: write a function which returns 485 as unsigned integer value
//put your return value in an integer variable in which you should have 229, and print it out
//try to figure out which type casting you should use

uint32_t number();

int main()
{
    uint32_t number();
    printf("%u\n", number());

    //no casting neded

    int a = 229;
    a = number();
    printf("%d\n", a);
    return 0;
}


uint32_t number()
{
    return 485;
}
