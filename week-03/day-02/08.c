#include <stdio.h>
#include <stdlib.h>

void transform (char str[], int original_base, int new_base);

//TODO: write a program, which transforms a number from a number system to another.
//use the stdlib.h functions, and take care of error handling (see the reference)
//the transform() function should print out the result.

int main()
{
    char str[20];
    int original_base;
    int new_base;

    while (1)
    {
        printf("Give me a number to transform it in an other system: ");
        scanf("%s", str);
        printf("Give me the original base: ");

        while (original_base < str)
        {
            scanf("%d", &original_base);
            printf("Number can not be interpreted in this number system. Add another number.\n");
            break;
        }

        if(original_base > 36 || original_base < 1)
        {
            printf("Base must be between 1 and 36.Try again!\n");
            continue;
        }
        printf("Give me the number of the new base: ");
        scanf("%d", &new_base);
        if(new_base > 36 || new_base < 1)
        {
            printf("Base must be between 1 and 36.Try again!\n");
            continue;
        }
        break;
    }

    transform(str, original_base, new_base);
    return(0);
}

void transform (char* str, int original_base, int new_base)
{


}
