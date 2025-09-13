#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 30

typedef struct {
    int position;
} Player;

void initializePlayers(Player *player1, Player *player2) {
    player1->position = 0;
    player2->position = 0;
}

int rollDice() {
    return (rand() % 6) + 1;
}

void printPositions(Player *player1, Player *player2) {
    printf("Player 1 position: %d\n", player1->position);
    printf("Player 2 position: %d\n", player2->position);
}

int main() {
    Player player1, player2;
    initializePlayers(&player1, &player2);
    
    srand(time(0));  // Seed for random number generation
    int currentPlayer = 1;
    
    while (player1.position < BOARD_SIZE && player2.position < BOARD_SIZE) {
        printf("\nCurrent player: Player %d\n", currentPlayer);
        int diceRoll = rollDice();
        printf("Rolled: %d\n", diceRoll);
        
        if (currentPlayer == 1) {
            player1.position += diceRoll;
            if (player1.position > BOARD_SIZE) {
                player1.position = BOARD_SIZE;  // If overshoot, move to the finish
            }
            currentPlayer = 2;
        } else {
            player2.position += diceRoll;
            if (player2.position > BOARD_SIZE) {
                player2.position = BOARD_SIZE;  // If overshoot, move to the finish
            }
            currentPlayer = 1;
        }
        
        printPositions(&player1, &player2);
        
        // Check for win condition
        if (player1.position == BOARD_SIZE) {
            printf("Player 1 wins!\n");
            break;
        } else if (player2.position == BOARD_SIZE) {
            printf("Player 2 wins!\n");
            break;
        }
    }
    
    return 0;
}

