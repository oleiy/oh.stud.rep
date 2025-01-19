#pragma once

#include <time.h>
#include <stdlib.h>

void runZadanie1(){
	
	float a, b, c;
	printf("Podaj a: \n");
	scanf("%f", &a);
	printf("Podaj b: \n");
	scanf("%f", &b);
	printf("Podaj c: \n");
	scanf("%f", &c);

	float* wskA = &a;
	float* wskB = &b;
	float* wskC = &c;

	printf("Adres a: %p\n", wskA);
	printf("Wartosc a: %f\nAdres a: %p\n", a, wskA);
	float roznica = *wskA - *wskB;
	printf("a - b = %f\n", roznica);
	float srednia = (*wskA + *wskB + *wskC) / 3;
	printf("Srednia a,b,c: %f\n", srednia);
}

void runZadanie2() {

	float tab[] = {5,6,3,2};
	float* wskTab = tab;
	printf("Adres pierwszego elementu tablicy: %p\n", wskTab);
	printf("Adres czwartego elementu tablicy: %p\n\n", wskTab+3);

	int n,m;
	printf("Podaj wartosc poczatkowa zakresu: \n");
	scanf("%f", &n);
	printf("Podaj wartosc koncowa zakresu: \n");
	scanf("%f", &m);

	float tab2[5];
	float* wskTab2 = tab2;
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		tab2[i] = (rand() % m - n + 1) + n;
	}
	for (int i = 0; i < 5; i++) {
		printf("Adres elementu tab2[%f]: %p\n",i, wskTab2+i);
	}

}

void runZadanie3() {

	int tab[4];
	int* wskTab = tab;
	//Wczytanie elementow
	for (int i = 0; i < 4; i++) {
		printf("Podaj tab[%d]: \n", i);
		scanf("%d", &tab[i]);
	}
	//Wypisanie elementów:
	for (int i = 0; i < 4; i++) {
		printf("tab[%d]: %d\n", i,tab[i]);
	}

	float avg = (tab[0] +tab[1]+ tab[2] + tab[3]) / 4.0;
	printf("Srednia elementow tablicy: %f\n", avg);

	printf("Elementy wieksze od sredniej: \n");
	for (int i = 0; i < 4; i++) {
		if (tab[i] + i > avg) {
			printf("tab[%d]: %d\n",i,tab[i]);
		}
	}

}


// Zadanie 4:
void zadanie4(int a, int* wska) {
	*wska = a * a;
}

void runZadanie4() {
	int a;
	printf("Podaj liczbe: \n");
	scanf("%d", &a);
	int result;
	zadanie4(a, &result);
		printf("Kwadrat liczby %d to %d\n", a, result);
}

//Zadanie 5:
int* potega(int* podstawa, int* wykladnik) {

	int* wynik= (int*)malloc(sizeof(int));
	*wynik = 1;
	for (int i = 0; i < *wykladnik; i++) {
		*wynik *= *podstawa; 
	}
	return wynik;
}

void runZadanie5() {

	int podstawa, wykladnik;

	printf("Podaj podstawe: ");
	scanf("%d", &podstawa);
	printf("Podaj wykladnik: ");
	scanf("%d", &wykladnik);

	int* wynik = potega(&podstawa, &wykladnik);

	printf("Wynik: %d^%d = %d\n", podstawa, wykladnik, *wynik);
	free(wynik);
}


//Zadnaie 6:
void zadanie6(char* znak, int *n) {
	for (int i = 0; i < *n; i++) {
		printf("%c\t", *znak);
	}
	(*n)--;
}

void runZadanie6() {
	int n;
	char znak;
	printf("Podaj znak: \n");
	scanf(" %c", &znak);
	printf("Podaj liczbe: \n");
	scanf("%d", &n);
	
	zadanie6(&znak, &n);

}


//Zadanie 7:
int* zadanie7(int* a, int* b) {
	static int mniejsza;
	if (*a > *b) {
		printf("Liczba %d jest wieksza od liczb %d\n", *a, *b);
		mniejsza = *b;
	} else if(*a==*b) {
		printf("Liczba %d jest rowna liczbie %d\n", *a, *b);
	}
	else {
		printf("Liczba %d jest wieksza od liczb %d\n", *b, *a);
		mniejsza = *a;
	}
	return &mniejsza;
}

void runZadanie7() {
	int a, b;
	printf("Podaj a: \n");
	scanf("%d", &a);
	printf("Podaj b: \n");
	scanf("%d", &b);
	zadanie7(&a, &b);
	
}

//Zadanie 8:

void zadanie8(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void runZadanie8() {
	int a, b;
	printf("Podaj a: \n");
	scanf("%d", &a);
	printf("Podaj b: \n");
	scanf("%d", &b);
	printf("Wartosci a: %d i b: %d przed zamiana\n", a, b);
	zadanie8(&a, &b);
	printf("Wartosci a: %d i b: %d po zamianie\n", a,b);
}