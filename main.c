#include <stdio.h>

const int NUM_TO_GUESS = 10;

int main(void)
{
    int guess;
    int isWinning = -1;
    int count = 0;

    while (isWinning == -1) {
        printf("Choose a number: ");
        scanf("%d", &guess);
        if (guess == NUM_TO_GUESS) {
            count++;
            isWinning = 1;
        } else if (guess > NUM_TO_GUESS) {
            printf("To hight \n");
        } else {
            printf("To low \n");
        }
        count++;
    }
    printf("You won after %d try", count);
}
