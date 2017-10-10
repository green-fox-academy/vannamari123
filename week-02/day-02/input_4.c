#include <stdio.h>
#include <string.h>

void scan_print();
void gets_puts();


int main()
{
    //write a void function which asks for a number with scanf and print it out with printf, then asks for a name with gets, and print it out with puts
    //you will notice something is wrong
    //try to solve the problem
    
    scan_print();
    getchar();
    gets_puts();
    
    return 0;
}

void scan_print(){
    int number = 0;
    printf("Give me a number:");
    scanf("%d", &number);
    printf("The number is: %d.\n", number);
}


void gets_puts(){
    char name[20];
    puts("Write your name:");
    fgets(name, 20, stdin);
    puts(name);
    
}
