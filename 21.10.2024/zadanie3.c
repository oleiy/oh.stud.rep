// 3. Napisaæ program, który pozwala u¿ytkownikowi na wprowadzenie dwóch liczb zmiennoprzecinkowych, a nastêpnie zwraca informacjê, która z wprowadzonych liczb jest liczb¹ wiêksz¹

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