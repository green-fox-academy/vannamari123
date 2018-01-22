#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double f = 0;
    printf("Fahrenheit\t\t   Celsius\n");
    for (f = 0; f < 200; f += 20) {
        printf("%.f\t\t\t\t\t%.1f \n", f, ((f - 32) * 5 / 9));
    }
    return 0;
}
