#include <stdio.h>

//TODO:
// Please fix the problem and swap where the pointers point,
// without using the "&" operator.

int main() {
    int high_number = 6655;
    int low_number = 2;

    int* hight_number_pointer = &low_number;
    int* low_number_pointer = &high_number;

    printf("Original memory address high_number_pointer: %p\n", hight_number_pointer);
    printf("Original memory address low_number_pointer:%p\n", low_number_pointer);

    int *temp = NULL;
    temp = hight_number_pointer;
    hight_number_pointer = low_number_pointer;
    low_number_pointer = temp;

    printf("Swapped memory address high_number_pointer: %p\n", hight_number_pointer);
    printf("Swapped memory address low_number_pointer:%p\n", low_number_pointer);

    return 0;
}
