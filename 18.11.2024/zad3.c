#include <stdio.h>
#include <string.h>

int liczba_sp = 0;
int liczba_sm = 0;
char tekst[50];

int main() {

	printf("Podaj tekst : ");
	fgets(tekst, sizeof(tekst), stdin);

	for (int i = 0; tekst[i] != '\0'; i++) {
		if (tekst[i] >= 'a' && tekst[i] <= 'z') {
				if (tekst[i] == 'a' || tekst[i] == 'e' || tekst[i] == 'i' || tekst[i] == 'o' || tekst[i] == 'u') {
					liczba_sm++;
				}
				else {
					liczba_sp++;
				}
			}
		}

	printf("W podanym tekscie znajduje sie %d spolglosek oraz %d samoglosek", liczba_sp, liczba_sm);

	return 0;
}