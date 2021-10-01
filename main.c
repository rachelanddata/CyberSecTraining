#include "dicegame.h"
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
	// for loop iterator
	int i;

    // two integer variables for min and max values for random generator
    int min = 6;
    int max = 9;

    // player 1 and 2 variables initialized at starting value 0
    int p1 = 0;
    int p2 = 0;

    // variable to hold current leading player
    int leadPlayer;

    // dice variable to hold random number and represent dice roll
    int dice;

    // variable to hold current round points earned
    int points;

    // variable to hold user input of amount of rounds to be played
    int rounds;

    // random number generator
    int srand();

    // variable to hold randomly chosen player to start the round
    int start;

    // if dice roll is 0/even then player 1 starts round
    if (start == 1){
        start = p1;
    }
    // otherwise player 2 starts
    else {
        start = p2;
    }

    // ask user to input desired number of rounds
    printf("Enter the number of rounds: ");
    scanf("%d", &rounds);

    // print total points for each player at the start of game
    printPlayerPoints(*p1, *p2);

    printf("ROUND #%d\n", (i+1));
    printf("________\n");
    printf("Player\t: %d", start);

    // for loop to iterate through number of rounds chosen by the player
    for (i = 0; i < rounds; i++){

        // random number to declare first player to start
        start = rand(2);

        printf("ROUND #%d\n", (i+2));
        printf("________\n");
        printf("Player\t: %d", leadPlayer);

        // call function to display details of the round
        printRoundInfo(roundType, dice, points, start, p1, p2);

        // at end of round display player points
        printfPlayerPoints(p1, p2);
    }

    // display end of game message with winner declaration
    printf("GAME OVER!\n");
    if (p1 > p2){
        printf("P1 Won");
    }
    else if (p2 > p1){
        print("P2 Won");
    }
    else{
        printf("Tie!");
    }

    return 0;
}
