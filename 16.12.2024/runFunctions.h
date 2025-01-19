#pragma once

void runZadanie1() {

    struct Trojkat t;

    printf("Podaj dlugosc pierwszego boku: ");
    scanf_s("%d", &t.a);

    printf("Podaj dlugosc drugiego boku: ");
    scanf_s("%d", &t.b);

    printf("Podaj dlugosc trzeciego boku: ");
    scanf_s("%d", &t.c);

	int wynik = zadanie1(t);

    printf("Obwod trojkata wynosi: %d", wynik);
}

void runZadanie2() {
    struct Trojkat troj1, troj2;

    printf("Podaj dlugosc pierwszego boku: ");
    scanf_s("%d", &troj1.a);

    printf("Podaj dlugosc drugiego boku: ");
    scanf_s("%d", &troj1.b);

    printf("Podaj dlugosc trzeciego boku: ");
    scanf_s("%d", &troj1.c);

    zadanie2(troj1, &troj2);

    printf("Dlugosci bokow trojkata troj2:\n");
    printf("Bok a: %d\n", troj2.a);
    printf("Bok b: %d\n", troj2.b);
    printf("Bok c: %d\n", troj2.c);
}
