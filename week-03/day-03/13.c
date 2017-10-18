
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


 //TODO: write a program which prints out the distance between the first and last occurance of character 's'


int main ()
{
    char str[] = "This is a sample string";
    char *first, *last;
    const char ch = 's';
    int distance = 0;

    first = strchr(str, ch);
    printf("%d\n", first - str);



    distance = first - last;
    printf ("The distance is: %d", distance);

    return 0;
}
