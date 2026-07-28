#include <stdio.h>

int main() {
    int a[] = {1, 3, 2, 4, 0, 9, 1, 1, 4};
    int anzahl[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int groesse = sizeof(a) / sizeof(a[0]);

    //erhöht den entsprechenden Platz in anzahl[] um 1, je nachdem welche Zahl vorkommt
    for (int i = 0; i < groesse; i++) {
        anzahl[a[i]]++;
    }

    for (int i = 0; i < groesse + 1; i++) {
        printf("Die Zahl %d kommt %d mal vor.\n", i, anzahl[i]);
    }

    return 0;
}