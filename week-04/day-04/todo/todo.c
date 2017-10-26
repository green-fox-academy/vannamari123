# include <stdio.h>
# include <stdlib.h>
# include "Functions.h"


typedef struct Task {
    char task_name[100];
    int priority;
} task;






int main()
{
    start_scr();

    char command[4];
    gets (command);

    if (strcmp(command, "-a") == 0)
        add_new_task();


    return 0;
}





void exit_program(void)
{
    exit(0);
}
