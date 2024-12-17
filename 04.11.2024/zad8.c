#include <stdio.h>
#define N 2

int main() {

	int A[N][N];
	int B[N][N];

	printf("Podaj elementy macierzy A[%d]x[%d]: \n", N, N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("Podaj element A[%d][%d]: ", i, j);
			scanf_s("%d", &A[i][j]);
		}
	}

	printf("Podaj elementy macierzy B[%d]x[%d]: \n", N, N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("Podaj element B[%d][%d]: ", i, j);
			scanf_s("%d", &B[i][j]);
		}
	}

	//Wypisanie macierzy A
	printf("\nMacierz A:\n");
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	//Wypisanie macierzy B
	printf("Macierz B:\n");
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}

	int suma[N][N];

	//Dodawanie macierzy A i B
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			suma[i][j] = A[i][j] + B[i][j];
		}
	}

	//Wypisanie macierzy A+B
	printf("\nMacierz A+B:\n");
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d ", suma[i][j]);
		}
		printf("\n");
	}

	return 0;
}