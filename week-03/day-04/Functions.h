
#ifndef Functions_h
#define Functions_h
#endif /* Functions_h */

//========================================================

void welcome_scr()
{
    printf("\n");
    printf("CLI Calculator\n");
    printf("====================================\n");
    printf("usage: [number] [operation] [number]\n");
    printf("Commands:\n");
    printf("+\t summation\n");
    printf("-\t subtraction\n");
    printf("*\t multiplication\n");
    printf("/\t division\n");
    printf("\t division with remainder\n");
    printf("^\t squaring\n");
    printf("<\t square root\n");
    printf("log\t logarithm\n");
    printf("binto\t binary to hex or dec\n");
    printf("hexto\t hexadecimal to bin or hex\n");
    printf("decto\t decimal to bin or hex\n");
    printf("====================================\n");
    printf("exit\t exit from the program\n");
    printf("clear\t clear the screen\n");
    printf("help\t print usage\n");
    printf("====================================\n");
    printf("Hit enter to start!\n");
    printf("====================================\n");
    printf("\n");

}

//========================================================

float summation(float num1, float num2)
{
    return num1 + num2;
}


float subtraction(float num1, float num2)
{
    return num1 - num2;
}

float multiplication(float num1, float num2)
{
    return num1 * num2;
}

float division(float num1, float num2)
{
    if (num2 == 0)
        printf("Division by 0 is not valid.");

    return num1 / num2;
}

int div_rem(int num1, int num2)
{
    return num1 % num2;
}

float squaring (float num1)
{
    return pow(num1, 2);
}

double sq_root(double num1)
{
    return sqrt(num1);
}

float logarithm(float num1)
{
    if (num1 <= 1)
    {
        printf("The base of the logarithm has to be a positive and dfferent from 1.");
        exit(0);
    }
    return log10(num1);
}
