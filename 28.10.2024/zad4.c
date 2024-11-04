#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

int main() {

	int n, wyraz, suma = 0;
	srand(time(NULL));

	printf("Podaj liczbe wyrazow ciagu: ");
	scanf_s("%d", &n);

	printf("Wylosowano nastepujace wyrazy ciagu z przedzialu od -10 do 45: \n");

	for (int i = 0; i < n; i++) {
		wyraz = (rand() % 56) - 10;
		printf("\t%d", wyraz);

		if (wyraz % 2 == 0) {
			suma += wyraz;
		}
	}

printf("\nSuma wyrazow tego ciagu wynosi: %d", suma);

	return 0;
}