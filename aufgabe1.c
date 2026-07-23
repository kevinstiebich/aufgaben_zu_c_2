#include <stdio.h>

int main() {
    for (int zahl = 20; zahl < 21 && zahl > 1; zahl--) {
        if (zahl % 2 == 0) {
            printf("%d\n", zahl);
        }
    }
}