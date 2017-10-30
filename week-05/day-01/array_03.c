//array_03
/*
 * Create a 2 dimensonal array of characters. 8x8
 * Fill the array with X and space alternating.
 * Print it out row by row. (It should resemble a chess board)
 * Designate a character for each chess peace. (Queen could be Q, King could be K, etc.)
 * Set up the start of a game.
 * Print it out again.
 * Make one move with a horse.
 * Print it again.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    char arr[8][8];

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if (i % 2 == 0 && j % 2 == 0){
                arr[i][j] = 'X';
                printf("%c ", arr[i][j]);
            } else if (i % 2 != 0 && j % 2 !=0){
                arr[i][j] = 'X';
                printf("%c ", arr[i][j]);
            } else {
                arr[i][j] = ' ';
                printf("%c ", arr[i][j]);
            }
        }

        printf("\n");
    }
    return 0;
}
