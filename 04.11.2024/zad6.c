#include <stdio.h>
#include <time.h>

int main() {

	int tab[20];

	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		tab[i] = (rand() % 20);
	}


	for (int i = 10; i <=20; i++) {
		tab[i]=tab[i-10];
	}

	for (int i = 0; i <20; i++) {
		printf("%d, ", tab[i]);
	}

	return 0;
}