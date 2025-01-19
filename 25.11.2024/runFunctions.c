#include "zadania.h"
#include <stdio.h>

void runZadanie1() {

	int n;
	printf("Podaj n: \n");
	scanf("%d", &n);

	int result = silnia(n);
	printf("Silnia(%d) = %d\n", n, result);
}

void runZadanie2() {

	int n;
	printf("Podaj n: \n");
	scanf("%d", &n);
	
	int result = ciag(n);
	printf("n-ty wyraz ciagu wynosi: %d\n", result);
}

void runZadanie3() {
	
	int a, b;
	printf("Podaj a: \n");
	scanf("%d", &a);
	printf("Podaj b: \n");
	scanf("%d", &b);

	int result = nwd(a,b);
	printf("NWD liczby %d i %d to: %d", a, b, result);
}

void runZadanie4() {

	for (int i = 2; i <= 8; i++) {
		int result = zad(i);
		printf("Wynik dla %d: %d\n", i, result);
	}
}

void runZadanie5() {
	int a;
	printf("Podaj a: \n");
	scanf("%d", &a);

	printf("Liczba %d w systemie dwojkowym to: ", a);
	int result = zamiana(a);
	
}

void runZadanie6() {
	int n;
	printf("Podaj n: \n");
	scanf("%d", &n);

	int result = ciag_Fibonnacego(n);
	printf("Wynik: %d", result);
}

void runZadanie8() {
	int x, n;
	printf("Podaj liczbe calkowita: ");
	scanf("%d",&x);
	printf("Podaj dodatnia liczbe calkowita: ");
	scanf("%d", &n);

	int result = fun(x, n);
	printf("Dla x = %d oraz n = %d wynik to: %d", x, n, result);
}