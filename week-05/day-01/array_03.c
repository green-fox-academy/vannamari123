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

//Creates empty chess table
/*    for (int i = 0; i < 8; i++){
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
*/

//Creates starting position table

for (int i = 0; i < 8; i++){
    for (int j = 0; j < 8; j++){
        if (i % 2 == 0 && j % 2 == 0){
            arr[i][j] = 'X';
        } else if (i % 2 != 0 && j % 2 !=0){
            arr[i][j] = 'X';
            arr[1][j] = 'P';
        } else {
            arr[i][j] = ' ';
        }
        arr[1][j] = arr[6][j] = 'P';
        arr[0][0] = arr[7][7] = arr[0][7] = arr[7][0] = 'R'; //R stands for Rook
        arr[0][1] = arr[0][6] = arr[7][1] = arr[7][6] = 'H'; //H stands for Horse
        arr[0][2] = arr[0][5] = arr[7][2] = arr[7][5] = 'B'; //B stands for Bishop
        arr[0][3] = arr[7][4] = 'Q'; //Q stands for Queen
        arr[0][4] = arr[7][3] = 'K'; //K stands for King
        printf("%c ", arr[i][j]);
    }

    printf("\n");
}

    return 0;
}
