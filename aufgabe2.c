#include <stdio.h>

int main() {
    //erstellt ein Array mit den Zahlen 1-5 und speicher in dessen Länge in einer Variable
    int arr[5] = {1, 2, 3, 4, 5}, arr2[5];
    int size = sizeof(arr) / sizeof(arr[0]);

    //erstellt ein zweites Array und speichert in diesem das gleiche Array, bloß in umgedrehter Reihenfolge
    for (int i = 0; i < size; i++) {
        arr2[i] = arr[size - 1 - i];
        printf("%d\n", arr2[i]);
    }

    return 0;
}