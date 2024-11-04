#include <stdio.h>

int main() {

	int i=0, n, punkty=0;
	float srednia = 0;

	printf("Podaj liczbe studentow: ");
	scanf_s("%d", &n);

	while (i < n) {
		i++;
		printf("Podaj liczbe punktow studenta %d.: ", i+1);
		scanf_s("%d", &punkty);
		srednia += punkty / n;
	}

	printf("Srednia punktow wszystkich studentow wynosi %.2f", srednia);

	return 0;
}