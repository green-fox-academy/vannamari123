#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(char i = 97; i < 123; i++)
    printf ("%c%c", i, i-32);
    printf("\n");

    return 0;
}
