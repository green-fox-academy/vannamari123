#include <stdio.h>


/*
 Exercise

 Write a program where the program chooses a number between 1 and 100. The player is then asked to enter a guess. If the player guesses wrong, then the program gives feedback and ask to enter an other guess until the guess is correct.

 Make the range customizable (ask for it before starting the guessing).
 You can add lives. (optional)
 Example

 I've the number between 1-100. You have 5 lives.

 20
 Too high. You have 4 lives left.

 10
 Too low. You have 3 lives left.

 15
 Congratulations. You won!

 */


 int main()
 {
     int r = 1 - rand() % 99;
     int number = 0;

     printf("I've the number between 1-100. Guess my number! You have 5 lives.\n");
     scanf("%d", &number);

     for (int i = 5 ; i > 0; i--)
     {
         if (number == r)
         {
             printf("Congratulations! You won!");
         } else if (number > r)
         {
             printf("Too high. You have %d lives left.", i);
         } else
         {
             printf("Too low. You have %d lives left.", i);
         }
         printf("You lost.");
     }

     return 0;

 }
