#include <stdio.h>

int main()
{
//    int arr[50];
    
    // TODO: write a program wich asks for a number, that will be the real size of the array (50 elements are allocated, that's the maximum size)
    // Then load up the array with integer values
    // print out the array
    // Then ask for a number, that will be the position, where you want the element to be deleted
    // handle the problem when trying to delete from invalid positions (e.g. negative number)
    // print out the the array after the deleting
    
    
    int size_of_array = 0;
    int array[size_of_array];
    
    printf("What is the size of the array?\n");
    scanf("%d", &size_of_array);
//    printf("Your array is %d long.\n", size_of_array);
    
    int number = 0;
    
    for (int i = 0; i < size_of_array; i++)
    {
        printf("Type a number to load up your array:");
        scanf ("%d", &number);
        getchar();
        array[i] = number;
    }
    
    printf("Your array is:");
    
    for (int j = 0; j < size_of_array; j++)
    {
        printf("%d\t", array[j]);
    }
    printf("\n");

    return 0;
    
}
