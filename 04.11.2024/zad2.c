#include <stdio.h>

int main() {

	int tab[10], x = 3;

	for (int i = 0; i < 10; i++) {
		tab[i] = x;
		printf("%d \t", tab[i]);
		x += 3;
	}

	printf("\n");

	for (int i = 0; i < 10; i++) {
		if (tab[i] % 2 == 0) {
			printf("%d \t", tab[i]);
		}
	}
	return 0;
}