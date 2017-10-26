# include <stdio.h>
# include <stdlib.h>

void start_scr();

int main()
{
    start_scr();

    return 0;
}


void start_scr()
{
    printf("Todo application\n====================\
           \nCommands: \
           \n-a   Adds a new task \
           \n-wr  Write current todos to file \
           \n-rd  Read todos from a file \
           \n-l   Lists all the tasks \
           \n-e   Empty the list \
           \n-rm   Removes a task \
           \n-c   Completes a task \
           \n-p   Add priority to a task \
           \n-lp  Lists all the tasks by priority \n");
}
