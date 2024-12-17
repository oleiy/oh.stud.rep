#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#define n 5

int main() {

	int tabInt[n];

	srand(time(NULL));

	for (int i = 0; i < n; i++) {
		tabInt[i] = (rand() % 74) + -23;
	}

	int min = tabInt[0];

	for (int i = 0; i < n; i++){

		if (tabInt[i] < min){
			min = tabInt[i];
		}
	}
	
	printf("Element o najmniejszej wartoœci to: %d ", min);

	return 0;
}