// TODO: Create a function that takes a string and two letters. The function should change every first letter to the second letter in the string.
//

#include <stdio.h>
#include "string.h"


void string_changer(char str[], char first_letter, char second_letter);

int main(int argc, const char * argv[]) {

    char my_string[] = "Hello world!";
    char first_letter = 'o';
    char second_letter = 'X';
    

    string_changer(my_string, first_letter, second_letter);
    return 0;
}


void string_changer(char str[], char first_letter, char second_letter)
{
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == first_letter){
                str[i] = second_letter;
        }
        printf("%c", str[i]);
    }

}
