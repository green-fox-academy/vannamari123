// array_01

/*
 * Create an array of 5 integers, fill it with random numbers.
 * Create an other of 7 integers.
 * Copy the contents of the first array into the second one in a way,
 * that the first and the last numbers of the second array are both 42,
 * and it contains all the elements of the first array.
 */

#include <stdio.h>
#include <string.h>

int main(){

    int arr_5[5] = {0, 12, 34, 56, 73};
    int arr_7[7];

    for (int i = 1; i < 6; i++){
        arr_7[0] = arr_7[6] = 42;
        arr_7[i] = arr_5[i-1];
    }

    for (int i = 0; i < 7; i++){
        printf("%d ", arr_7[i]);
    }

    return 0;
}
