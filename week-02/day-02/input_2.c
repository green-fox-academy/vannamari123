#include <stdio.h>

//TODO:
// Print it out with puts

//TODO:
// Get the user's pet name with getch

//TODO:
// Print it out


int main()
{
    char buffer[255];   // Buffer variable for user input
 
    puts("Enter your name!");
    gets(buffer);
    
    puts("Enter your pet's name!");
    gets(buffer);

    puts("What is your pet's name?");
    
    for (int i = 0; i < 255; i++)
    {
        char input = getchar();
        if (input != '\n')
            buffer[i]=input;
        else
            break;
        
        printf("%c", buffer[i]);
       
    }
    printf("\n");
    
    return 0;
}
