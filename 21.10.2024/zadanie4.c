#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	float a, b, c, d;
	printf("Podaj pierwsza liczbe zmiennoprzecinkowa: \n");
	scanf_s("%f", &a);
	printf("Podaj druga liczbe zmiennoprzecinkowa: \n");
	scanf_s("%f", &b);
	printf("Podaj trzecia liczbe zmiennoprzecinkowa: \n");
	scanf_s("%f", &c);
	printf("Podaj czwarta liczbe zmiennoprzecinkowa: \n");
	scanf_s("%f", &d);

	float wynik = (a + b + c + d) / 4;

	printf("Srednia arytmetyczna podanych liczb wynosi: %.3f", wynik);

	return 0;
}