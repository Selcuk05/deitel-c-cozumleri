#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void moveTurtle(int *loc){
    int randNum = (rand() % 10) + 1;

    if(1 <= randNum && randNum <= 5){
        *loc += 3;
    } else if(6 <= randNum && randNum <= 7){
        *loc -= 6;
    } else if(8 <= randNum && randNum <= 10){
        *loc += 1;
    }

    if(*loc < 0){
        *loc = 0;
    }

    if(*loc > 69){
        *loc = 69;
    }
}

void moveRabbit(int *loc){
    int randNum = (rand() % 10) + 1;

    if(3 <= randNum && randNum <= 4){
        *loc += 9;
    } else if(4 < randNum && randNum <= 5){
        *loc -= 12;
    } else if(6 <= randNum && randNum <= 8){
        *loc += 1;
    } else if(9 <= randNum && randNum <= 10){
        *loc -= 2;
    }

    if(*loc < 0){
        *loc = 0;
    }

    if(*loc > 69){
        *loc = 69;
    }
}

void printTrack(int *rLoc, int *tLoc){
    printf("\n");

    for(int i = 0; i < 70; i++){
        if(i == *rLoc && i != *tLoc){
            printf("T");
        } else if(i == *tLoc && i != *rLoc){
            printf("K");
        } else if(*rLoc == *tLoc && *rLoc == i && i != 0){
            printf("OUCH!"); 
        } else {
            printf("-");
        }
    }
}

// 7.17
int main(){

    srand(time(NULL));

    int r = 0;
    int t = 0;
    int *rLoc = &r;
    int *tLoc = &t;

    printf("\nYaris basladi!");
    while(1){
        moveRabbit(rLoc);
        moveTurtle(tLoc);
        printTrack(rLoc, tLoc);

        if(r >= 69 && t < 69){
            printf("\nTavsan kazandi!");
            break;
        }

        if(t >= 69 && r < 69){
            printf("\nKaplumbaga kazandi!");
            break;
        }

        if(t >= 69 && r >= 69){
            printf("\nBerabere!");
            break;
        }
    }
}