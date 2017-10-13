#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int r = 1 + rand() % 99;
    int number = 0;

    printf("I've the number between 1-100. Guess my number! You have 5 lives.\n");

    for (int i = 5 ; i > 0; i--)
    {
        scanf("%d", &number);
        if (number == r)
        {
            printf("Congratulations! You won!\n");
        } else if (number > r)
        {
            printf("Too high. You have %d lives left.\n", i);
        } else
        {
            printf("Too low. You have %d lives left.\n", i);
        }
    }
    printf("The number was:%d\n", r);
    printf("You lost.\n");

    return 0;

}
