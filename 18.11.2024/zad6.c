#include <stdio.h>
#include <string.h>

int main() {

    char s1[] = "abcdefghijklmnopqrstuvwxyz";
    char s2[] = "zyxwvutsrqponmlkjihgfedcba";

    char napis[100];
    char napisZakodowany[100];

    printf("Podaj ciag znakow: ");
    fgets(napis, sizeof(napis), stdin);

    size_t dlugosc = strlen(napis);
    if (napis[dlugosc - 1] == '\n') {
        napis[dlugosc - 1] = '\0';
    }

    for (int i = 0; napis[i] != '\0'; i++) {
        int znak = 0;

        for (int j = 0; s1[j] != '\0'; j++) {
            if (napis[i] == s1[j]) {
                napisZakodowany[i] = s2[j];
                znak = 1;
                break; 
            }
        }

        if (znak == 0) {
            napisZakodowany[i] = napis[i];
        }
    }

    napisZakodowany[dlugosc] = '\0';

    printf("Zakodowany ciag: %s\n", napisZakodowany);

    return 0;
}