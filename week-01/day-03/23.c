#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int girls_number = 0;
    int boys_number = 13;
 
    if (girls_number != 0){
        if ( girls_number+boys_number>20 ){
            if (girls_number == boys_number){
                printf("The party is excellent!");
            } else {
                printf("Quite cool party!");
            }
        } else {
               printf("Average party...");
        }
     } else {
         printf("Sausage party");
       }
return 0;
}

