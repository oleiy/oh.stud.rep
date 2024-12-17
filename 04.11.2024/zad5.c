#include <stdio.h>

int main() {
	
	int tab[8];

	printf("Podaj pierwszy elemet tablicy: ");
	scanf_s("%d", &tab[0]);
	printf("Podaj drugi elemet tablicy: ");
	scanf_s("%d", &tab[1]);

	printf("1. %d\n2. %d\n\n",tab[0],tab[1]);

	for (int i = 2; i < 7; i++) {
		tab[i] = tab[i-1] + tab[i-2];
	}

	for (int i = 0; i < 7; i++) {
		printf("%d\t", tab[i]);
	}

	return 0;
}