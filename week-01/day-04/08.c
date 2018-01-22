#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num = 0;
    int r = 0;
    while (num < 100){
        r = num % 2;
    switch(r) {
        case 0:
            printf("Even \n");
            break;
        default:
            printf("Odd \n");
            break;
    }
    num++;
    }

return 0;
}
