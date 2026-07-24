#include <stdio.h>
#include <string.h>

int main() {
    char eingabe[50];
    printf("Gebe einen Text ein: ");
    fgets(eingabe, sizeof(eingabe), stdin);

    for (int i = 0; i < strlen(eingabe); i++) {
        if (eingabe[i] > 't' || eingabe[i] > 'l' && eingabe[i] < 'r') {
            continue;
        } else {
            switch (eingabe[i]) {
                case 'a':
                    eingabe[i] = '4';
                    break;
                case 'b':
                    eingabe[i] = '8';
                    break;
                case 'e':
                    eingabe[i] = '3';
                    break;
                case 'f':
                    for (int j = 0; j < strlen(eingabe) + 1 - i; j++) {
                        eingabe[strlen(eingabe) + 1 - j] = eingabe[strlen(eingabe) + 1 - 1 - j];
                    }
                    eingabe[i] = 'p';
                    eingabe[i + 1] = 'h';
                    break;
                case 'g':
                    eingabe[i] = '9';
                    break;
                case 'i':
                    eingabe[i] = '!';
                    break;
                case 'l':
                    eingabe[i] = '1';
                    break;
                case 's':
                    eingabe[i] = '5';
                    break;
                case 't':
                    eingabe[i] = '7';
                    break;
                case 'r':
                    eingabe[i] = '2';
                    break;
            }
        }
    }

    printf("%s\n", eingabe);

    return 0;
}