#include <stdio.h>
#include <string.h>
#include <unistd.h>

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

#define MAX_LEN_SIZE 256
#define BASE_PATH "../"

void createNewFile() {
    char name[MAX_LEN_SIZE];
    printf("Enter a file name: ");
    scanf("%s", name);

    char path[MAX_LEN_SIZE + strlen(BASE_PATH) + 1];
    strcpy(path, BASE_PATH);
    strcat(path, name);

    FILE *file = fopen(path, "w");

    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return;
    }

    fprintf(file, "Hello, world!\n");
    fclose(file);
    printf("Successfully created a new file at %s\n", path);
}

int main(void) {
    int array[] = {1, 2};
    int length = sizeof(array) / sizeof(array[0]);

    squaredArray(array, length);

    createNewFile();


    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        printf("%d \n", array[i]);
    }

    return 0;
}
