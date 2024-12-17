#include <stdio.h>
#define N 3


int main() {

	int matrix[N][N];

	printf("Podaj element macierzy %dx%d\n", N, N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("Element [%d][%d]: ", i + 1, j + 1);
			scanf_s("%d", &matrix[i][j]);
		}
	}

	printf("\nPodana macierz:\n");
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%4d", matrix[i][j]);
		}
			printf("\n");
	}

	int suma = 0;
	for (int i = 0; i < N; i++) {
			suma = suma + matrix[i][i];
	}

	printf("Suma elementow glownej przekatnej wynosi: %d", suma);

	return 0;
}