/*
 * Create an array of 5 integers.
 * Fill it with random integer numbers.
 * Print out the array elements in one line, divided by " | ".
 * Reverse the order of the numbers _in_the_array_ an print them out again.
 */

#include <stdio.h>
#include <string.h>

int main() {

    int arr[6] = {12, 25, 17, 89, 45, 16};
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; i++){
        printf("%d | ", arr[i]);
    }

    printf("\n");

    int len2 = len / 2;

    if (len % 2 != 0){
        for (int i = 0; i < len2 + 1; i++){
            int temp = arr[len -1 -i];
            arr[len - 1 -i] = arr[i];
            arr[i] = temp;
        }
    } else {
            for (int i = 0; i < len2; i++){
                int temp = arr[len -1 -i];
                arr[len - 1 -i] = arr[i];
                arr[i] = temp;
        }
        }

    for (int i = 0; i < len; i++){
        printf("%d | ", arr[i]);
    }
    return 0;
}
