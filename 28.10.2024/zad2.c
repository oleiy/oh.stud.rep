#include <stdio.h>

int main() {

	int a, licznik1 = 0, licznik2 = 0, suma1 = 0, suma2 = 0;

	for (int i = 0; i < 10; i++) {
		printf("Podaj liczbe: ");
		scanf_s("%d", &a);
		if (a < 0) {
			licznik1++;
			suma1 += a;
		}
		else if (a > 0) {
			licznik2++;
			suma2 += a;
		}
	}
	printf("Jest %d liczb ujemnych\n", licznik1);
	printf("Suma liczb ujemnych wynosi %d\n", suma1);
	printf("Jest %d liczb dodatnich\n", licznik2);
	printf("Suma liczb dodatnich wynosi %d\n", suma2);
		return 0;
}	