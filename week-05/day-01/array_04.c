// array_04

    /*
     * Create 9 arrays of characters, each should contain a word.
     * Let it be this: The Quick brown Dog jumps over the Lazy Fox.
     * Create an array of 9 pointers of chractrer type.
     * Make it so, that each pointer points to one of the words. Meaning to one of the original arrays You just created.
     * So You'll have a pointer pointing to each of these original arrays in an array of pointers.
     * Print them out, each in a new line using this array of pointers.
     * Now make it so, that the Fox is Green and he jumps over the lazy dog.
     * Use the existing arrays to achive this.
     * Print it out again.
     */


#include <stdio.h>
#include <stdlib.h>

int main()
{
/*    char arr_0[] = "The";
    char arr_1[] = "Quick";
    char arr_2[] = "Brown";
    char arr_3[] = "Dog";
    char arr_4[] = "jumps";
    char arr_5[] = "over";
    char arr_6[] = "the";
    char arr_7[] = "Lazy";
    char arr_8[] = "Fox.";

    char *ptr_arr[9];

    ptr_arr[0] = arr_0;
    ptr_arr[1] = arr_1;
    ptr_arr[2] = arr_2;
    ptr_arr[3] = arr_3;
    ptr_arr[4] = arr_4;
    ptr_arr[5] = arr_5;
    ptr_arr[6] = arr_6;
    ptr_arr[7] = arr_7;
    ptr_arr[8] = arr_8;

    for (int i = 0; i < 9; i++){
    puts(ptr_arr[i]);
    }
*/

//Second part on the task

  char arr_0[] = "The";
  char arr_1[] = "Fox";
  char arr_2[] = "is";
  char arr_3[] = "green";
  char arr_4[] = "and he";
  char arr_5[] = "jumps";
  char arr_6[] = "over";
  char arr_7[] = "Lazy";
  char arr_8[] = "Dog.";

  char *ptr_arr[10];

  ptr_arr[0] = arr_0;
  ptr_arr[1] = arr_1;
  ptr_arr[2] = arr_2;
  ptr_arr[3] = arr_3;
  ptr_arr[4] = arr_4;
  ptr_arr[5] = arr_5;
  ptr_arr[6] = arr_6;
  ptr_arr[7] = arr_0;
  ptr_arr[8] = arr_7;
  ptr_arr[9] = arr_8;

  for (int i = 0; i < 9; i++){
      puts(ptr_arr[i]);
  }

    return 0;
}
