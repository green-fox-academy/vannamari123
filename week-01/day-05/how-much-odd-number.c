
#include <stdio.h>
#include <stdlib.h>

//how much odd numbers are between 179 & 371
//you should be able to change the limits, like from 10 to 234
//and the program should print out the odd numbers between those two numbers
//example from 11 to 27 the program should print out:
// 13, 15, 17, 19, 21, 23, 25 this is 7 odd number between 11 and 27

int main()
{
    int a = 12;
    int b = 22;
    int i = 0;
    int j = 0;
    for (i = a + 1; i < b; i++) {
        if ( i % 2 == 1){
            printf("%d ", i);
            j++;
        }
    }
    printf("this is %d odd number between %d and %d. \n", j, a, b);

return 0;
}
