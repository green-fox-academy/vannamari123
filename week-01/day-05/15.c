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
    int bancnotes = 0;
    int remainder = 0;
    bancnotes=amount_of_money/20000;
    
    if(bancnotes!=0){
        printf("%d - 20000Ft\n", bancnotes);
    }
    
    remainder=amount_of_money%20000;
    bancnotes=remainder/10000;
    if (bancnotes!=0) {
        printf("%d - 10000Ft\n", bancnotes);
    }
    
    remainder=remainder%10000;
    bancnotes=remainder/2000;
    if (bancnotes!=0) {
        printf("%d - 2000Ft\n", bancnotes);
    }
    
    remainder=remainder%2000;
    bancnotes=remainder/1000;
    if (bancnotes!=0) {
        printf("%d - 1000Ft\n", bancnotes);
    }
    
    remainder=remainder%1000;
    bancnotes=remainder/500;
    if (bancnotes!=0) {
        printf("%d - 500Ft\n", bancnotes);
    }
    
    remainder=remainder%500;
    bancnotes=remainder/200;
    if (bancnotes!=0) {
        printf("%d - 200Ft\n", bancnotes);
    }
    
    remainder=remainder%200;
    bancnotes=remainder/100;
    if (bancnotes!=0) {
        printf("%d - 100Ft\n", bancnotes);
    }
    
    remainder=remainder%100;
    bancnotes=remainder/50;
    if (bancnotes!=0) {
        printf("%d - 50Ft\n", bancnotes);
    }
    
    
    remainder=remainder%50;
    bancnotes=remainder/20;
    if (bancnotes!=0) {
        printf("%d - 20Ft\n", bancnotes);
    }
    
    remainder=remainder%20;
    bancnotes=remainder/10;
    if (bancnotes!=0) {
        printf("%d - 10Ft\n", bancnotes);
    }
    
    remainder=remainder%10;
    bancnotes=remainder/5;
    
    remainder=remainder%5;
    switch(remainder){
        case 1:
            printf("Rounding: down 1 Ft \n");
            break;
        case 2:
            printf("Ronding: down 2 Ft \n");
            break;
        case 3:
            bancnotes++;
            printf("Rounding: up 3 Ft \n");
            break;
        case 4:
            bancnotes++;
            printf("Rounding: up 4 Ft \n");
            break;
    }
    
    if (bancnotes!=0) {
        printf("%d - 5Ft\n", bancnotes);
    }
    
    return 0;
    
}



