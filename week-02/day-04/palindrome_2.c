//Create a function named search palindrome.
//It should take a string, search for palindromes that at least 3 characters
//long and return a list with the found palindromes.

#include <stdio.h>
#include <string.h>


int main()
{
    char str[100];

    printf("Input a string\n");
    gets(str);

    int n = strlen(str);

    for (int length = 3; length < n; length++)
    {
        for(int i = 1; i < n-1; i++)
        {
            if (str[i-1] == str[i+1])
            {
                printf("%c%c%c\n", str[i-1], str[i], str[i+1]);
            } else {
                length++;
            }
        }
        printf("something\n");
    }








    return 0;
}
