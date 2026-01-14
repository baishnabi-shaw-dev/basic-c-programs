#include <stdio.h>
#include <stdlib.h>
int roll_dice() 
{
    return rand() % 6 + 1;
}

int main() 
{
    int i, p1, p2;
    int p1s=0,p2s=0;
    printf("=== Dice Game: 2 Players, 10 Rounds ===\n\n");

    for (i=1;i<=10;i++)
	{
        printf("\nRound %d:\n", i);
        p1 = roll_dice();
        p2 = roll_dice();
        printf("Player 1 rolls: %d\n", p1);
        printf("Player 2 rolls: %d\n", p2);
        p1s+= p1;
        p2s+= p2;
    }
    printf("\n=== Final Score ===\n\n");
    printf("Player 1: %d\n", p1s);
    printf("Player 2: %d\n", p2s);
    
     printf("The player Win !!!!\n");
    if (p1s>p2s)
        printf("Player 1 Wins!\n");
    else if (p2s>p1s)
        printf("Player 2 Wins!\n");
    else
        printf("It's a Tie!\n");
}

