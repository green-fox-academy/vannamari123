#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a = 54325;
    char buffer[20];

    //TODO: make an integer to string conversion with itoa(), first in binary, then decimal format
    // Store the string in buffer

    strcpy(buffer, "54325");
    a = atoi(buffer);
    printf("String value = %s, Int value = %d\n", buffer, a);

    return 0;
}
