#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Input a string\n");
    gets(str);

    int n = strlen(str);

    printf("%s", str);
    for (int i = n; i >= 0; i--)
    {
        printf ("%c", str[i]);
    }

    printf("\n");

}
