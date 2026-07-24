#include <stdio.h>

int main() {
    char raute[10];

    for (int i = 0; i < 5; i++) {
        int j = 0;
        //setzt die entsprechende Anzahl an Leerzeilen vor der ersten Raute
        while (j < 4 - i){
            raute[j] = ' ';
            j++;
        }
        //setzt entsprechende Anzahl an Rauten
        for (int k = 0; k < i * 2 + 1; k++) {
            raute[j] = '#';
            j++;
        }
        //setzt die entsprechende Anzahl an Leerzeilen nach der letzten Raute
        while (j < 4 - i){
            raute[j] = ' ';
            j++;
        }
        printf("%s\n", raute);
    }
    return 0;
}