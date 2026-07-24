#include <stdio.h>

int main() {
    //erstellt ein Array mit den Zahlen 1-5 und speicher in dessen Länge in einer Variable
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    //kehrt das Array um, indem der eigentliche Wert in einer Variable zwischengespeichert wird, dann wird der 1. Platz mit dem Letzen getauscht, dann der 2. mit dem Vorletzten etc.
    for (int i = 0; i < (size / 2); i++) {
            int safe = arr[i];
            arr[i] = arr[size - 1 - i];
            arr[size - 1 - i] = safe;
    }

    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}