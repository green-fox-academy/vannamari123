// array_function_00

    /*
     * Create a function that takes an array of integers as an argument (a pointer) and it's length as an unsigned integer.
     * The function should sort the elements of the array in ascending order.
     *
     * Print it out before and after to be able to check whether it works as supposed.
     */

#include <stdio.h>
#include <stdlib.h>

void array_sort(int *arr, uint len);

int main()
{
    int my_array[5] = {34, 56, 12, 2, 89};
    array_sort(my_array, 5);

    return 0;
}

void array_sort(int *arr, uint len)
{
    for (int i = 0; i < len; i++){
        for (int j = i + 1 ; j < len-1; j++){
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The numbers arranged in ascending order are:\n");
    for (int i = 0; i < len; i++)
        printf("%d\n", arr[i]);
}
