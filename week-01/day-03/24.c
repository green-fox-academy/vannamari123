#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//24.c
/*
 Create a program which converts days to years, months, weeks and days
 to keep it simple we say every year is 365 days long, every month is 30 days
 */

int main()
{
    int days = 3243;
    int year = 0;
    int x = 0; 
    int month = 0
    int day = 0;
    year=days/365;
    printf("Number of years: %d \n", year);
    
    x=days-year*365;
    month=x/30;
    
    x=x-month*30;
    day=x;
    
    printf("Number of months: %d \n", month);
    printf("Number od days: %d \n,", day);
    
return 0;
}


