#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//19.c

int main()
{
    int a = 654;
    uint64_t b = 654987312;
    int c = b % a;
        if(c=3){
            printf("c=3");
	} else {
            printf("c not equal to  3");
	}
return 0;
}
