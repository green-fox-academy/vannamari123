#include <stdio.h>

//TODO:
// update the value of number variable to 42 using the "number_pointer"

int main() {
    int number = 1234;
    int* number_pointer = &number;
    *number_pointer = 42;
    number = *number_pointer;

    printf("%d\n", number);

    return 0;
}
