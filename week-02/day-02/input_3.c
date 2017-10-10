#include <stdio.h>


int main()
{
   char char_to_ascii;
    
    printf("Type in one character, then press enter: \n");
    scanf("%c", &char_to_ascii);
    printf("The ASCII value of the caracter '%c' is %d.\n", char_to_ascii, char_to_ascii);

    return 0;
}
