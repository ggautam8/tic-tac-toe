#include <stdio.h>

# define MAX_COUNT 3

void printBoard(char [MAX_COUNT][MAX_COUNT]);

int main(void) {
    //TODO: Dynamically initialize the array
    char board[MAX_COUNT][MAX_COUNT] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};
    int playerOneRow = 0, playerOneColumn = 0;
    int playerTwoRow = 0, playerTwoColumn = 0;
    int turns = 0;
    while (turns < 10) {
        //TODO : Handle incorrect coordinates
        //TODO : Check how to handle player turns??
        printf("Player One enter location for X as (i,j) :");
        scanf(" %d %d", &playerOneRow, &playerOneColumn);
        turns++;
        // Assuming PlayerOne is X
        board[playerOneRow][playerOneColumn] = 'X';
        printBoard(board);
        printf("Player Two enter location for O as (i,j) :");
        scanf("%d %d", &playerTwoRow, &playerTwoColumn);
        // Assuming PlayerTwo is O
        board[playerTwoRow][playerTwoColumn] = 'O';
        printBoard(board);
        turns++;
    }
}

/**
 * Prints the TicTacToe board state. The board looks something like this :
 * (0,0) | (0,1) | (0,2)
 * (1,0) | (1,1) | (1,2)
 * (2,0) | (2,1) | (2,2)
 */
void printBoard(char board[MAX_COUNT][MAX_COUNT]) {
    for (int i = 0; i < MAX_COUNT; i++) {
        for (int j = 0; j < MAX_COUNT; j++) {
            printf("%c", board[i][j]);
            if (j < MAX_COUNT - 1) {
                printf(" | ");
            }
        }
        printf("\n");
    }
}
