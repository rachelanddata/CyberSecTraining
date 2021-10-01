#include "dicegame.h"
#include <stdio.h>
#include <stdlib.h>

// print player 1 and 2 points
void printPlayerPoints(int* p1, int* p2){


    printf("P1\t: %d\n", &p1);
    printf("P2\t: %d\n", &p2);
}

// generate and return a random number
int getRandomNumber(int min, int max){
    //int srand(max);
    int roundNum = rand(max);

    return roundNum;

}

// determine type of round using random number
void getRoundType(int roundNum){
    if (roundNum <= 1){
        ROUNDTYPE(0);
        printf("Type\t: Regular\n");
    }

    else if (roundNum <= 4){
        ROUNDTYPE(1);
        printf("Type\t: Bonus\n");
    }

    else {
        ROUNDTYPE(2);
        printf("Type\t: Double\n");
    }
}

int getRoundPoints(enum roundType){
    enum round;
    getRandomNumber(6,9);
}

void printRoundInfo(enum t, int dice, int points, int start, int p1, int p2){
    int factor;
    int t;

    t = getRoundType();

    if (t == 0){
    	factor =
    }

    if (dice % 2 == 0){
        p1 = p1 + points;
    }

    printf("Dice\t: %d\n", dice);
    printf("Points\t: %d\n", points);
}

void diceRoll(int dice){
    if (dice )

}
