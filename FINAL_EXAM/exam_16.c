//
// TODO: Create a function that takes a string and two letters.
//The function should change every first letter to the second letter in the string.
//

#include <stdio.h>
#include "string.h"


void string_changer(char str[], char first_letter, char second_letter);

int main(int argc, const char * argv[])
{
    char my_string[] = "Hello world!";
    char my__other_string[] = "A long long long string";

    string_changer(my_string, 'o', 'X');
    string_changer(my__other_string, 'o', 'X');

    return 0;
}


void string_changer(char str[], char first_letter, char second_letter)
{
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == first_letter) {
                str[i] = second_letter;
        }
        printf("%c", str[i]);
    }
    printf("\n");
}
