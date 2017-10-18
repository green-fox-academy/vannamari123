#include <stdio.h>
#include <string.h>

//TODO: write a program, which lists all position where character 'i' is found

int main ()
{
    char string[55] ="This is a string for testing";
    const char ch = 'i';

    printf("Positions of i in string are:\n");

    for (int i = 0; i < strlen(string); i++)
    {
            if (string[i] == ch)
            {
                printf("%d\n", i+1);
            }
    }

    return 0;
}
