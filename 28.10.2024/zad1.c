#include <stdio.h>

int main() {

	int liczba, max, licznik=0;
	float suma=0, srednia;

	printf("Podaj liczbe: ");
	scanf_s("%d", &liczba);
	max = liczba;

	while (liczba > 0) {
		//suma
		suma += liczba;
		licznik++;
		if (liczba > max) max = liczba;

		printf("Podaj liczbe: ");
		scanf_s("%d", &liczba);

	}

	if (licznik > 0) {
		srednia = suma / licznik;
		printf("Suma: %f\n", suma);
		printf("Srednia: %f\n", srednia);
		printf("Max: %d\n", max);
	}
	else {
		printf("Nie wprowadzono zadnych liczb dodatnich");
	}

	return 0;
}