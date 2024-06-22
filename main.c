#include <stdio.h>

# define MAX_COUNT 3

void printBoard(char[MAX_COUNT][MAX_COUNT]);

int main(void) {
    //TODO: Dynamically initialize the array
    char board[MAX_COUNT][MAX_COUNT] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};
    printBoard(board);
}

/**
 * Prints the TicTacToe board state. The board looks something like this :
 * O | X | X
 * X | X | O
 * O | X | X
 */
void printBoard(char board[MAX_COUNT][MAX_COUNT]) {
    for (int i = 0; i < MAX_COUNT ; i++) {
        for(int j = 0; j < MAX_COUNT; j++) {
            printf("%c",board[i][j]);
            if (j < MAX_COUNT -1 ) {
                printf(" | ");
            }
        }
        printf("\n");
    }
}