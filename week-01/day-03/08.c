#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//08.c
int main()
{
    int h1 = 350;
    int h2 = 200;
    int h3 = h2 * 2;
    if (h3 > h1) {
        printf(" %d is larger than %d.", h3, h1);
    } else {
        printf("%d is smaller than %d.", h3, h1);
    }
    return 0;
}
