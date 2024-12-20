#include <stdio.h>
#include <string.h>

int main() {
	char imie[50] = "Oliwier Hedrzak ";
	char nrAlbumu[] = "134913";

	//³¹czenie
	strcat(imie, nrAlbumu);
	printf("Dane studenta: %s", imie);

	//kopiowanie
	char dest[50];
	strcpy(dest, imie);
	printf("\n\nSkopiowane dane: %s", dest);

	size_t len = strlen(imie);
	printf("\n\nDlugosc tekstu: %lu\n", len);


	//³¹czenie
	return 0;
}
