// array_02.c
/*
 * Create an array of 12 integers. Fill it with random numbers.
 * Sort them in ascending order using bubble sort. -- Google it if You don't know it. (It's easy)
 * Print out the numbers before and after the sorting.
 */

#include <stdio.h>

int main(){

    int arr[12] = {123, 45, 1, 12, 67, 87, 90, 25, 13, 2, 34, 46};

    for (int i = 12; i > 0; i--){
        for (int j = 0; j < i - 1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < 12; i++){
        printf("%d ", arr[i]);
    }
    return 0;

}
