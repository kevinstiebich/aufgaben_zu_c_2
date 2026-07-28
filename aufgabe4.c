#include <stdio.h>

int main() {
    int matrix[4][4] = {
        {2, 3, 5, 7},
        {11, 13, 17, 19},
        {23, 29, 31, 37},
        {41, 43, 47, 53}
    };
    int sum[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    //rechnet alle Reihen, Spalten und Diagonalen aus
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            sum[i] += matrix[i][j];
            sum[i + 4] += matrix[j][i];

            if (i == j) {
                sum[sizeof(matrix[0]) / sizeof(matrix[0][0]) * 2] += matrix[i][j];
            } else if (i + j == sizeof(matrix[0]) / sizeof(matrix[0][0]) - 1) {
                sum[sizeof(matrix[0]) / sizeof(matrix[0][0]) * 2 + 1] += matrix[i][j];
            }
        }
    }

    //gibt das Ergebnis aus und ob es eine Reihe, Spalte oder Diagonale war
    for (int i = 1; i < 9; i++) {
        if (i <= 4) {
            printf("Summe Reihe %d: %d\n", i, sum[i - 1]);
        } else if (i > 4) {
            printf("Summe Spalte %d: %d\n", i - 4, sum[i - 1]);
        }
    }
    printf("Summe Diagonale 1: %d\n", sum[sizeof(matrix[0]) / sizeof(matrix[0][0]) * 2]);
    printf("Summe Diagonale 2: %d\n", sum[sizeof(matrix[0]) / sizeof(matrix[0][0]) * 2 + 1]);

    return 0;
}