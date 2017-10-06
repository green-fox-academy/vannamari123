#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//10.c
int main() {
    int j1 = 10;
    int j2 = 3;
    int js=pow(j2,2);
    int jc=pow(j2,3);
    if (j1>js){
        if (j1<jc){
 	    printf("The %d is larger than %d squared and smaller than %d cubed.", j1, j2, j2);
 	}
    }
return 0;
 }

