#include <stdio.h>

int main() {
    int numberOfRows;
    printf("Wieviele Reihen sollen es sein? ");
    scanf("%d", &numberOfRows);
    int lineLength = numberOfRows * 2;
    char raute[lineLength];

    for (int i = 0; i < numberOfRows; i++) {
        int j = 0;
        //setzt die entsprechende Anzahl an Leerzeilen vor der ersten Raute
        while (j < numberOfRows - 1 - i){
            raute[j] = ' ';
            j++;
        }
        //setzt entsprechende Anzahl an Rauten
        for (int k = 0; k < i * 2 + 1; k++) {
            raute[j] = '#';
            j++;
        }
        raute[j] = '\0';
        printf("%s\n", raute);
    }
    return 0;
}