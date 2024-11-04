#include <stdio.h>

int main() {

	int n;
	int wyraz, suma = 0;

	printf("Podaj liczbe wyrazow ciagu: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Podaj %d. wyraz ciagu: ", i+1);
		scanf_s("%d", &wyraz);
		if (wyraz % 2 == 0) {
			suma += wyraz;
		}
	}

	printf("Suma wyrazow tego ciagu wynosi: %d", suma);

	return 0;
}