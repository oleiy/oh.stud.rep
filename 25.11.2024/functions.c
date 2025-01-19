#include <stdio.h>

//Zadanie1:
int silnia(int n) {

	if (n == 0) {
		return 1;
	}
	else {
		return n * silnia(n - 1);
	}
}

//Zadanie2:
int ciag(int n){

	if (n == 1) {
		return -1;
	}
	else if (n > 1) {
		return ciag(n - 1) * (-1) * (n - 2);
	}

}

//Zadanie3:
int nwd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return nwd(b, a % b);
	}
}


//Zadanie4:
int zad(int i) {
	if (i < 3) {
		return 1;
	}
	else if (i % 2 == 0) {
		return zad(i - 3) + zad(i - 1) + 1;
	}
	else {
		return zad(i - 1) % 7;
	}
}

//Zadanie5:
int zamiana(int a) {
	if (a > 1) {
		zamiana(a / 2);
	}
	printf("%d", a%2);
}

//Zadnaie6:
int ciag_Fibonnacego(int n) {

	if (n == 0) {
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	else{
		return ciag_Fibonnacego(n - 2) + ciag_Fibonnacego(n - 1);
	}
}

//Zadanie8:
int fun(int x, int n) {
	if (n == 1) {
		return x;
	}
	else if (n % 3 == 0) {
		int k = fun(x, n / 3);
		return k * k * k;
	}
	else {
		return x * fun(x, n - 1);
	}
}
