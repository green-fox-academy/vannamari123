/*
 * Create a function that takes an array of array of characters and returns an array of integers each representing the
 * lenght of the given character array in the first array.
 * Say your input is this: {"Good", "Morning", "Vietnam"}
 * Your output should be this: {4, 7, 7}.
 * HINT: strings are terminated with a special character: '\0'.
 * So, "Good" as an array of characters would look like this: {'G', 'o', 'o', 'd', '\0'}.
 *
 * In the main function create code that demonstrates that Your function works approrpiately.
 */


#include <stdio.h>
#include <string.h>


int arr_length(char* arr, int arr_len, int str_len);


int main()
{
    char my_array[4][20]={"Good", "Morning", "Vietnam", "Hello"};

    arr_length(my_array, 4, 20);

    return 0;
}


int arr_length(char* arr, int arr_len, int str_len)
{
    int counter = 0;
    int number = 0;
    int output[arr_len];

    printf("\nOutput array:");

    for (int i = 0; i < arr_len; i++){
        char *p = arr + i*str_len;
        while(*p != '\0'){
            counter++;
            p++;
                if (*p == '\0'){
                    number = counter;
                    counter = -1;
                    counter++;
                }
        }

        output[i] = number;
        printf("%d ", output[i]);
    }

    printf("\n");
    return 0;
}
