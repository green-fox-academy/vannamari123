#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1=85;
    int num2=96;
    int e=0;
 
    e = num1 / num2;
   
     switch (e) {
        case 0:
        printf("The larger number is: %d \n", num2);
            break;
            
        default:
        printf("The larger number is: %d \n", num1);
            break;
    }
    
    return 0;
}

