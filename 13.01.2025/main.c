#include <stdio.h>
#include <stdlib.h>

#define INPUT_FILE "promienie.txt"
#define OUTPUT_FILE "wynik.txt"

double area(double radius) {
	return 3.14 * radius * radius;
}

int main() {

	FILE* inputFile, * outputFile;

	double radi[2], areas[2];

	//otwieranie pliku
	inputFile = fopen(INPUT_FILE, "r");
	if (inputFile == NULL) {
		printf("Nie moge otworzyc pliku %s.\n", INPUT_FILE);
		return 1;
	}

	//wczytanie danych z pliku do tablicy promieni
	for (int i = 0; i < 2; i++) {
		if (fscanf(inputFile, "%lf", &radi[i]) != 1) {
			printf("Blad odczytu danych z pliku %s\n", INPUT_FILE);
			fclose(inputFile);
			return 1;
		}
	}

	fclose(inputFile); // zamkniecie pliku promien.txt

	//obliczanie pol

	for (int i = 0; i < 2; i++) {
		areas[i] = area(radi[i]);
	}

	if (areas[0] > areas[1]) {
		double temp = areas[0];
		areas[0] = areas[1];
		areas[1] = temp;
	}

	//zapis do pliku
	outputFile = fopen(OUTPUT_FILE, "w");
	if (outputFile == NULL) {
		printf("Nie mo¿na otworzyc pliku %s do zapisywnaia wynikow\n", OUTPUT_FILE);
		return 1;
	}
	for (int i = 0; i < 2; i++) {
		fprintf(outputFile, " % 2lf\n", areas[i]);
	}
	fclose(outputFile);
	printf("Wyniki zapisano do pliku %s.\n", OUTPUT_FILE);
	return 0;
}