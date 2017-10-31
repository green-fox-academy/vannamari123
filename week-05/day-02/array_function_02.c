/*
 * Create a function that takes two arrays of characters and a number.
 * It should replace the contents of the first array from the given index
 * with the contents of the second array.
 * The function should return a number which tells whether it was successful:
 *    * If all is right it should return 0.
 *    * If the index is out of bounds it should return -1.
 *    * If the inserted content would be longer than the receiving array it should return 1 and leave the array as it is.
 * IMPORTANT: Think about what kind of arguments You need to make this happen and craft the function accordingly.
 *
 * Write code in the main function to test all scenarios and write out the result You need to check whether this works.
 */

#include <stdio.h>
#include <string.h>

int replace(char* arg1, char* arg2, int index);


int main()
{
    char arr1[] = "Hello";
    char arr2[] = "good world";

    printf("%d\n", replace(arr1, arr2, 8));
    printf("%d\n", replace(arr1, arr2, 4));
    puts(arr1);

    return 0;
}


int replace(char* arg1, char* arg2, int index)
{
    int len1 = strlen(arg1);
    int len2 = strlen(arg2);

    if (index > len1){
        return -1;
    } else {
        for (int i = 0; i < len1 + len2; i++){
            arg1[i+index] = arg2[i];
        }
        return 0;
    }
}
