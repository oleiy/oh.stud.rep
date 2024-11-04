#include <stdio.h>

int main() {

	int i = 0;

	// Ciag 1,2,3,...,100
	printf("Ciag 1,2,3,...,100:\n");
	while (i < 100) {
		i++;
		printf("%d, ", i);
	}

	// Ciag 100,99,...,2,1,0
	i = 100;
	printf("\n\nCiag 100,99,...,2,1,0:\n");
	while (i >= 1) {
		printf("%d, ", i);
		i--;
	}

	
	// Ciag 7,14,21,...,70,77
	i = 0;
	printf("\n\nCiag 7,14,21,...,70,77:\n");
	while (i < 77) {
		i+=7;
		printf("%d, ", i);
	}

	// Ciag 20,18,...,2,0
	i = 20;
	printf("\n\nCiag 20,18,...,2,0:\n");
	while (i >= 2) {
		printf("%d, ", i);
		i -= 2;;
	}

	return 0;
}