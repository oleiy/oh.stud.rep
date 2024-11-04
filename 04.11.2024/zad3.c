#include <stdio.h>

#define n 5

int main() {

	int a;
	int x = 5;
	printf("Podaj a: \n");
	scanf_s("%d", &a);

	int tabInt[n];

	//zainicjowanie tablicy wartosciami
	for (int i = 0; i < n; i++) {
		tabInt[i] = a;
		printf("%d\t", tabInt[i]);
		a = a - x;
		x *= 2;
	}
	
	printf("\n");

	//wypisywanie
	for (int i = n-1; i >= 0; i--) {
		printf("%d\t", tabInt[i]);
	}

	return 0;
}
