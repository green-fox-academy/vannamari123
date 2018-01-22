#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num = 14;
    int r = num % 2;
    switch (r) {
        case 0:
            printf("The number is even. \n");
            break;
        default:
            printf("The number is odd. \n");
            break;
    }
}
