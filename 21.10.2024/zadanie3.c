// 3. Napisa� program, kt�ry pozwala u�ytkownikowi na wprowadzenie dw�ch liczb zmiennoprzecinkowych, a nast�pnie zwraca informacj�, kt�ra z wprowadzonych liczb jest liczb� wi�ksz�

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	float a, b;
	printf("Podaj pierwsza liczbe zmiennoprzecinkowa: \n");
	scanf_s("%f", &a);
		printf("Podaj druga liczbe zmiennoprzecinkowa: \n");
	scanf_s("%f", &b);

		if (a > b) {
			printf("Liczba %.2f jest wieksza od liczby %.2f: \n", a, b);
		}
		else if (a == b) {
			printf("Podane liczby sa rowne!\n");
		}
		else {
			printf("Liczba %.2f jest mniejsza od liczby %.2f: \n", a, b);
		}

	return 0;
}