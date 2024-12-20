#include <stdio.h>
#include <string.h>

char liczba[10];

int main() {

	printf("Podaj liczbe calkowita: ");
	fgets(liczba, sizeof(liczba), stdin);

    for (int i = 0; liczba[i] != '\0'; i++) {
        switch (liczba[i]) {
        case '0':
            printf("zero ");
            break;
        case '1':
            printf("jeden ");
            break;
        case '2':
            printf("dwa ");
            break;
        case '3':
            printf("trzy ");
            break;
        case '4':
            printf("cztery ");
            break;
        case '5':
            printf("piec ");
            break;
        case '6':
            printf("szesc ");
            break;
        case '7':
            printf("siedem ");
            break;
        case '8':
            printf("osiem ");
            break;
        case '9':
            printf("dziewiec ");
            break;
        default:
            break;
        }
    }

	return 0;
}