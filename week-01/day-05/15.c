#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Take care of the rounding (when giving back 5 coins):
1, 2 - 0 down
3, 4 - 5 up
6, 7 - 5 down
8, 9 - 0 up
*/

int main()
{
    int amount_of_money = 168;
    int drb, maradek;
    drb=amount_of_money/20000;
    if(drb!=0){
        printf("%d - 20000Ft\n", drb);
    }
    
    maradek=amount_of_money%20000;
    drb=maradek/10000;
    if (drb!=0) {
        printf("%d - 10000Ft\n", drb);
    }
    
    maradek=maradek%10000;
    drb=maradek/2000;
    if (drb!=0) {
        printf("%d - 2000Ft\n", drb);
    }
    
    maradek=maradek%2000;
    drb=maradek/1000;
    if (drb!=0) {
        printf("%d - 1000Ft\n", drb);
    }
    
    maradek=maradek%1000;
    drb=maradek/500;
    if (drb!=0) {
        printf("%d - 500Ft\n", drb);
    }
    
    maradek=maradek%500;
    drb=maradek/200;
    if (drb!=0) {
        printf("%d - 200Ft\n", drb);
    }
    
    maradek=maradek%200;
    drb=maradek/100;
    if (drb!=0) {
        printf("%d - 100Ft\n", drb);
    }
    
    maradek=maradek%100;
    drb=maradek/50;
    if (drb!=0) {
        printf("%d - 50Ft\n", drb);
    }
    
    
    maradek=maradek%50;
    drb=maradek/20;
    if (drb!=0) {
        printf("%d - 20Ft\n", drb);
    }
    
    maradek=maradek%20;
    drb=maradek/10;
    if (drb!=0) {
        printf("%d - 10Ft\n", drb);
    }
    
    maradek=maradek%10;
    drb=maradek/5;
    
    maradek=maradek%5;
    switch(maradek){
        case 1:
            printf("Rounding: down 1 Ft \n");
            break;
        case 2:
            printf("Ronding: down 2 Ft \n");
            break;
        case 3:
            drb++;
            printf("Rounding: up 3 Ft \n");
            break;
        case 4:
            drb++;
            printf("Rounding: up 4 Ft \n");
            break;
    }
    
    if (drb!=0) {
        printf("%d - 5Ft\n", drb);
    }
    
    return 0;
    
}



