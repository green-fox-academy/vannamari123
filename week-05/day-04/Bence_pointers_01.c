/*POINTER FOR NUMBERS(ARRAYS)

Every task should be in different function, and use pointers

1, Fill your array with numbers from 0 to N
2, count numbers, who has hundreds place is 1 and ones place is 3 (103,113 ...) return with the count and print out in the main()
3, sum the full!! arrays elements return with it, and print out in the main()
4, sum the arrays elements, which has divided by 4, and return with their avarage, print out in the main()

POINTER FOR STRINGS

Every task should be in different function, and use pointers

1, fill your string with your name, sum the length of your array, return with the length, print it out in the main()
2, count the 'a'-s (or something else) in your string, return with it, and print out in the main() function
3, Change the capital letter to lowercase and the lowercase into capital letter - print out in the main() function
*/




#include <stdio.h>
#include <math.h>

void arr_filler(int *arr, int N);
int counter(int *arr, int N);

int main()

{
    int my_array[1000];
    arr_filler(my_array, 1000);

    for (int i = 0; i < sizeof(my_array)/sizeof(int); i++){
        printf("%d ", my_array[i]);
    }

    printf("Count is: %d", counter(my_array, 1000));


    return 0;

}


void arr_filler(int *arr, int N)
{
    for (int i = 0; i < N; i++){
        arr[i] = i;
    }
}



int counter(int *arr, int N)
{
    int count = 0;
    int i = 0;

    for (i = 0; i < N; i++){
        if (arr[i] % 10 == 3 && arr[i] / 100 % 10 == 1){
            count++;
        }
    }

    return count;
}
