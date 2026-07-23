#include <stdio.h>

int main() {
    int a[] = {1, 3, 2, 4, 0, 9, 1, 1, 4};
    int anzahl[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int groesse = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < groesse; i++) {
        switch (a[i]) {
            case 0:
                anzahl[0]++;
                break;
            case 1:
                anzahl[1]++;
                break;
            case 2:
                anzahl[2]++;
                break;
            case 3:
                anzahl[3]++;
                break;
            case 4:
                anzahl[4]++;
                break;
            case 5:
                anzahl[5]++;
                break;
            case 6:
                anzahl[6]++;
                break;
            case 7:
                anzahl[7]++;
                break;
            case 8:
                anzahl[8]++;
                break;
            case 9:
                anzahl[9]++;
                break;
        }
    }

    for (int i = 0; i < groesse + 1; i++) {
        printf("Die Zahl %d kommt %d mal vor.\n", i, anzahl[i]);
    }

    return 0;
}