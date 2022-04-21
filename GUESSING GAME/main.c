#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void gameLogic(int guess, int random)
{
    if (guess == random)
    {
        printf("Congratulations! The guessed number by the computer was %d", random);
    }
    else if (guess > random && guess - random <= 10)
    {
        printf("You are close! My guessed number is lesser than %d", guess);
    }
    else if (guess > random && guess - random > 10)
    {
        printf("Too high! My guessed number is lesser than %d", guess);
    }
    else if (guess < random && random - guess <= 10)
    {
        printf("You are close! My guessed number is higher than %d", guess);
    }
    else if (guess < random && random - guess > 10)
    {
        printf("Too low! My guessed number is higher than %d", guess);
    }
    else
    {
        printf("Please enter a number between 1 to 100");
    }
}

void gameInterface(char start)
{
    int r;
    time_t t ;
    srand((unsigned)time(&t));
    r = rand()%100 + 1;
    int userguessednumber;
    int guesslimit;
    if (start == 'Y' || start == 'y')
    {
        printf("\nThe computer has randomly chosen a number.\nGuess the number to win the game!");
        for(guesslimit=5;guesslimit > 0  ;guesslimit--)
        {
            printf("\n\nYou have %d tr%s left", guesslimit,guesslimit == 1 ? "y" : "ies");
            printf("\nEnter the number to guess: ");
            scanf("%d", &userguessednumber);
            printf("\nYour entered number is: %d\n", userguessednumber);
            if(userguessednumber==r)
            {
                printf("\n\nCongratulations! The guessed number by the computer was %d\n\n", r);
                exit(0);
            }
            gameLogic(userguessednumber,r);
        }
        printf("\n\nYou have guessed for 5 times and you have failed to guess the right number!\nThe random number picked up by the computer was %d",r);
    }
    else
        exit(0);
}

int main()
{
    printf("\nWelcome to guessing game! The computer will randomly choose a number from 1 to 100 and you have to guess the right number within 5 tries to win the game!\n");
    printf("\nTo start the game please Enter 'Y' or to leave the game please enter 'N': ");
    char startchoice;
    scanf("%c", &startchoice);

    gameInterface(startchoice);

    return 0;
}





