#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    for (int num=1; num<100; num++) {
        int h = num % 15;
        switch (h) {
            case 0:
                printf("FizzBuzz\n");
                break;
            case 3:
            case 6:
	    case 9:
	    case 12:
		printf("Fizz \n");
                break;
            case 5:
	    case 10:
                printf("Buzz \n");
                break;

            default:
                printf("%d \n", num);
                break;
        }
    }
    
    return 0;
}

