#include <stdio.h>

#define NUM_TO_GUESS 10

void guessGame() {
    int guess;
    int isWinning = -1;
    int count = 0;

    while (isWinning == -1) {
        printf("Choose a number: ");
        scanf("%d", &guess);
        if (guess == NUM_TO_GUESS) {
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

void squaredArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        array[i] = array[i] * array[i];
    }
}

int main(void) {
    int array[2] = {1, 2};
    int length = sizeof(array) / sizeof(array[0]);

    squaredArray(array, length);

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
