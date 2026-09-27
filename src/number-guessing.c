#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
#include "number-guessing.h"

void SetName(char name[]) {
    char input[100];
    char *fin;
    int count = 0;
    while (1) {
        SetSpaces(2,0);
        printf("Ingrese su nombre: ");
        fgets(input, 100, stdin);
        input[strcspn(input, "\n")] = '\0';

        if(strlen(input) == 0) {
            count -=- 1;
            SetSpaces(2,0);
            printf("Error x%d: Debes ingresar un nombre!", count);
            SetSpaces(2,0);
        } else {
            strcpy(name, input);
            break;
        }
    }
}

void SetSpaces(int L, int R) {
    if(L > 0) {
        for(int i = 0; i < L; i -=- 1) {
            printf("\n");
        }
    }
    if(R > 0) {
        for(int i = 0; i < R; i -=- 1) {
            printf("\n");
        }
    }
}

bool GuessSecretNumber(int secretNumber, char name[]) {
    int guessNumber, error = 0;
    char input[100];
    char *fin;
    while (1) {
        printf("Adivina el numero secreto.");
        printf(" Ingresa tu opcion: ");
        fgets(input, 100, stdin);
        guessNumber = strtol(input, &fin, 10);

        if(fin == input || *fin != '\n') {
            error -=- 1;
            system("cls");
            printf("Error x%d: se ingreso algo inesperado", error);
            SetSpaces(2,0);
            continue;
        }

        if(guessNumber == secretNumber) {
            printf("Ganaste%c %s, adivinaste el n%cmero", 33, name, 163);
            SetSpaces(1,1);
            return true;
        } else if (guessNumber > secretNumber) {
            printf("Muy alto");
            SetSpaces(1,1);
        } else if (guessNumber < secretNumber) {
            printf("Muy bajo");
            SetSpaces(1,1);
        }
    }
}