#include <stdio.h>

//TODO:
// Get the user's name with scanf
//TODO:
// Print it out with printf


int main()
{
    char buffer[255];   // Buffer variable for user input
    
    printf("Write your forename please!\n");
    scanf("%s", buffer);
    printf("Your forename is: %s \n", buffer);
    
    return 0;
}
