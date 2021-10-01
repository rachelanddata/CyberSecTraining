#ifndef dicegame_h
#define dicegame_h

#include <stdio.h>

enum ROUNDTYPE {BONUS, DOUBLE, REGULAR}

void printPlayerPoints(int, int);
int getRandomNumber (int, int);

enum getRoundType(int);

int getRoundPoints(enum roundType);

void printRoundInfo(ROUNDTYPE, int, int);


#endif /* dicegame_h */
