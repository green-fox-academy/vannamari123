#include <stdio.h>
#include <string.h>

//TODO: write a program, which lists all position where character 'i' is found

int main ()
{
    char string[55] ="This is a string for testing";
    char *p;
    const char ch = 'i';

    p = strchr(string, ch);
    printf("%s", p);


    return 0;
}
