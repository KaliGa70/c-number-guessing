#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "number-guessing.h"

int main() {
    srand((unsigned)time(NULL));

    printf("%cBienvenido al juego de adivinar el numero%c", 173, 33);

    int count = 0, min = 1, max = 100, error = 0;
    char input[100];
    int guessNumber;
    char name[100];
    int secretNumber = rand() % (max - min + 1) + min;
    bool youWon = false;
    
    SetName(name);

    //Adivinar numero
    while (1) {
        youWon = GuessSecretNumber(secretNumber, name);

        if (youWon) {
            while (1) {
                SetSpaces(0, 1);
                printf("Volver a jugar%c (Y/n): ", 63);
                fgets(input, 100, stdin);
                input[strcspn(input, "\n")] = '\0';

                if (
                    strlen(input) != 1 ||
                    (
                        strcmp(input, "Y") != 0 && 
                        strcmp(input, "y") != 0 && 
                        strcmp(input, "N") != 0 && 
                        strcmp(input, "n") != 0
                    )
                ) {
                    SetSpaces(1, 1);
                    printf("Error: no ingresaste algo valido%c", 33);
                    SetSpaces(1, 1);
                } else {
                    break;
                }
            }

            if (input[0] == 'Y' || input[0] == 'y') {
                secretNumber = rand() % (max - min + 1) + min;
                break;
            } else {
                return 0;
            }
        }
    }
    
}