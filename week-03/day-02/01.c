#include <stdio.h>


main()
{
    int  i = 2;
    float f = 13.5, result;

    //TODO: print out the f/i quotient

		result = f / (float) i;
		printf("%.3f\n", result );

    //QUESTION: do you need explicit conversion?
		//No, works without casting.

    return 0;
}
