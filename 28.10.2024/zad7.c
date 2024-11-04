#include <stdio.h>

int main() {

	int i, j;

	printf("\n\nRezultat 1\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++)
			printf("X");
			printf("\n");
	}

	printf("\nRezultat 2\n");

	for (int i = 10; i >= 1; i--) {
		for (int j = 0; j <= i; j++)
			printf("X");
		printf("\n");
	}

	printf("\nRezultat 3\n");

	for (int i = 10; i >= 1; i--) {
		for (int j = 0; j <= i; j++)
			printf("X");
		printf("\n");
	}

	return 0;
}