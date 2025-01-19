#include <stdio.h>
#include "struct.h"
#include "functions.h"
#include "runFunctions.h"


int main() {

	int zadanie;

	printf("====== ZADANIA 25.11.2024 ======\n");
	printf("1. Zadanie 1\n");
	printf("2. Zadanie 2\n");
	printf("3. Zadanie 3\n");
	printf("4. Zadanie 4\n");
	printf("5. Zadanie 5\n");
	printf("6. Zadanie 6\n");
	printf("7. Zadanie 7\n");
	printf("8. Zadanie 8\n");
	printf("Wybierz zadanie: \n");
	scanf_s("%d", &zadanie);

	switch (zadanie) {
	case 1:
		runZadanie1();
		break;
	case 2:
		runZadanie2();
		break;
	case 3:
		//runZadanie3();
		break;
	case 4:
		//runZadanie4();
		break;
	case 5:
		//runZadanie5();
		break;
	case 6:
		//runZadanie6();
		break;
	case 7:
		//runZadanie5();
		break;
	case 8:
		//runZadanie8();
		break;
	case 9:
		//runZadanie9();
		break;
	default:
		printf("Nie ma takiego zadania!");
		break;
	}

	return 0;
}