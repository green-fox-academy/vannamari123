#include <stdio.h>

  //TODO: write a function which swaps the values of x and y. Then print out the values of x and y.

void swap(int *a, int *b);

int main()
{
    int x, y;
    x = 5;
    y = 8;
    printf("Before Swapping\nx = %d\ny = %d\n", x, y);

    swap(&x, &y);

    return 0;
}


void swap(int *a, int *b)
{
    int *temp = NULL;
    temp = a;
    a = b;
    b = temp;

    printf("After swapping\nx = %d\ny = %d\n", *a, *b);

}
