#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int a, b, option, wynik;

	printf("--- KALUKULATOR ___\n");

	printf("Wprowadz pierwsza liczbe: ");
	scanf_s("%d", &a);
	printf("Wprowadz pierwsza liczbe: ");
	scanf_s("%d", &b);

	printf("Wybierz jedna z opcji: \nDodawanie - 1 || Odejmowanie - 2 || Mnozenie - 3 || Dzielenie - 4\nWybor: ");
	scanf_s("%d", &option);

	switch (option){
	case 1: 
		wynik = a + b;
		printf("Wybrano opcje: %d - dodawanie\n", option);
		break;
	case 2:
		wynik = a - b;
		printf("Wybrano opcje: %d - odejmowanie\n", option);
		break;
	case 3:
		wynik = a * b;
		printf("Wybrano opcje: %d - mnozenie\n", option);
		break;
	case 4:
		if (b != 0) {
			wynik = a / b;
			printf("Wybrano opcje: %d - dzielenie\n", option);
		}
		else {
			printf("Nie dziel baranie przez 0");
		}
		break;
	default: wynik = a + b;
		printf("Wybrano opcje: domyslna - dodawanie\n");
		break;
	}

	printf("Wynik: %d", wynik);

	return 0;
}