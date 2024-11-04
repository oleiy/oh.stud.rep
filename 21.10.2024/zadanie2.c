// 2. Napisaæ program, który sprawdza czy podana liczba ca³kowaita, wczytana z klawiatury jest parzysta czy nie parzysta.

#include <stdio.h>
#define _CRT_SECURE_NO_A

int main() {

	int a;

	printf("Podaj liczbe\n");
	scanf_s("%d", &a);

	if (a % 2 == 0) {
		printf("\nLiczba: %d to liczba parzysta", a);
	}
	else {
		printf("\nLiczba: %d to liczba nieparzysta", a);
	}
	return 0;
}