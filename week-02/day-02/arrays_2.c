#include <stdio.h>

int main() {
    char char_array[] = {'a', 'b', 'c', 'd'};
    char char_array_the_same[] = "abcd";
    
    printf("%d \n", sizeof(char_array));
    printf("%d \n", sizeof(char_array_the_same));
    
    for (int i = 0; i < 4; i++)
    {
        printf("%c", char_array[i]);
    }
    printf("\n");
    
    for (int i = 0; i < 5; i++)
    {
        printf("%c", char_array_the_same[i]);
    }
    printf("\n");
    
    return 0;
}
