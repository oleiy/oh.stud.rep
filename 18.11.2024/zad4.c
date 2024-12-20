#include <stdio.h>
#include <string.h>
#include <ctype.h>

char tekst[30];

int main(){

	printf("Podaj tekst: ");
	fgets(tekst, sizeof(tekst), stdin);
	
	int i = 0; 
	int j = strlen(tekst)-1;
	
	while (i < j) {
		char temp = tekst[i];
		tekst[i] = tekst[j];
		tekst[j] = temp;
		i++;
		j--;
	}

	for (int i = 0; tekst[i] != '\0'; i++) {
		tekst[i] = tolower(tekst[i]);
	}
	printf("Odwrocony tekst malymi literami: %s", tekst);

	return 0;
}