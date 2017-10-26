//
//  Functions.c
//  TodoApp
//


#include <stdio.h>

void start_scr()
{
    printf("\nTodo application\n====================\
           \nCommands: \
           \n-a   Adds a new task \
           \n-wr  Write current todos to file \
           \n-rd  Read todos from a file \
           \n-l   Lists all the tasks \
           \n-e   Empty the list \
           \n-rm   Removes a task \
           \n-c   Completes a task \
           \n-p   Add priority to a task \
           \n-lp  Lists all the tasks by priority \
           \n \n");
}

void add_new_task()
{
    FILE *fp;
    fp = fopen("/tmp/tasks.txt", "w+");
    fputs("Walk the dog\n", fp);
    fprintf(fp, "This is testing for fprintf...\n");

    fclose(fp);
    printf("Half victory");
}
