#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Functions.h"
#include <curses.h>


void welcome_scr();
void clear_scr();



int main()
{
  //  char command[2];


  //  welcome_scr();
 //   gets(command);

    float a = 10;
    float b = 3;
    char command[6] = "log";


   if (strcmp(command, "+") == 0)
    {
        float c = summation(a, b);
        printf("%.2f\n", c);
    }

    if (strcmp(command, "-") == 0)
    {
        printf("%.2f\n", subtraction(a, b));
    }

    if (strcmp(command, "*") == 0)
    {
        printf("%.2f\n", multiplication(a,b));
    }

    if (strcmp(command, "/") == 0)
    {
        printf("%.2f\n", division(a,b));
    }

    if (strcmp(command, "%") == 0)
    {
        printf("%d\n", div_rem(a, b));
    }

    if (strcmp(command, "^") == 0)
    {
        printf("%.2f\n", squaring(a));
    }

    if (strcmp(command, "<") == 0)
    {
        printf("%.2f\n", sq_root(a));
    }

    if (strcmp(command, "log") == 0)
    {
        printf("%.2f\n", logarithm(a));
    }


    return 0;
}







void clear_scr()
{
   system("@cls||clear");

}
