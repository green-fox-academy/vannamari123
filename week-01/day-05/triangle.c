#include <stdio.h>

/*create a simple program which generates a triangle like this:
 1
 22
 333
 4444
 55555
 666666
 7777777
 if you change the rows variable the output should be different as well
 */


int main()
{
    int rows = 7;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j){
            printf("%d", j);
        } printf ("\n");
    }
    return 0;
}
