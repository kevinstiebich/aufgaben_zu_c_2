#include <stdio.h>
#include <string.h>

int main() {
    //lässt den Benutzer einen Satz eingeben und speichert ihn in einem Array
    char eingabe[50];
    printf("Gebe einen Satz ein: ");
    fgets(eingabe, sizeof(eingabe), stdin);
    
    //entfernt alle Zeichen außer die Buchstaben a-z und füllt den Rest mit Nullbytes
    int j = 0;
    for (int i = 0; eingabe[i] != '\0'; i++) {
        if (eingabe[i] >= 'a' && eingabe[i] <= 'z') {
            eingabe[j] = eingabe[i];
            j++;
        }
    }
    while (j < sizeof(eingabe)) {
        eingabe[j] = '\0';
        j++;
    }

    //erzeugt 2 Arrays, die genau so lang ist wie das Wort selbst und den relevanten Inhalt erben (+ ein Nullbyte)
    char bereinigt[strlen(eingabe) + 1];
    char spiegel[strlen(eingabe) + 1];
    strncpy(bereinigt, eingabe, strlen(eingabe) + 1);
    strncpy(spiegel, eingabe, strlen(eingabe) + 1);

    //eines dieser Arrays wird gespiegel
    for (int i = 0; i < strlen(spiegel) / 2; i++) {
        char speicher = spiegel[i];
        spiegel[i] = spiegel[strlen(spiegel) - 1 - i];
        spiegel[strlen(spiegel) - 1 - i] = speicher;
    }

    //vergleicht die beiden Arrays, findet Palindrome und gibt das Ergebnis aus
    if (strcmp(bereinigt, spiegel) == 0) {
        printf("Palindrom!\n");
    } else printf("Kein Palindrom!\n");

    return 0;
}