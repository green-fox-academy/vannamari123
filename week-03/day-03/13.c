
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
    printf("Place of first %c: %d\n", ch, first - str);

    last = strrchr(str, ch);
    printf("Place of last %c: %d\n", ch, last - str);

    distance = last - first -1;
    printf ("The distance is: %d\n", distance);

    return 0;
}
