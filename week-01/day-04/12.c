#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    for (int i=0; i<7 ; i++) {
        if(i==0){
            printf("Monday \n");
        }else if(i==1){
            printf("Tuesday \n");
        } else if(i==2){
            printf("Wednesday \n");
        } else if(i==3){
            printf("Thursday \n");
        } else if(i==4){
            printf("Friday \n");
        } else if (i==5){
            printf("Saturday \n");
        } else if (i==6){
            printf("Sunday \n");
        }
    }
    return 0;
}

