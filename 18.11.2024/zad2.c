#include <stdio.h>
#include <string.h>

int main() {
	char tab1[26];
	//char taba[] = "abcdefghijklmnoperstuwxyzABCDEFGHIJKLMNOPERSTUWXYZ0123456789";
	//for (int i = 0; i < sizeof(taba); i++) {
		//printf("Znak: %s = \t\t kod ASCII: %d", taba[i], taba[i]);
	//}

	for (int i = 0; i < 26; i++) {
		tab1[i] = 'a' + i;
		printf("%c ", tab1[i]);
	}
	printf("\nASCII dla a-z: \n");
	for (int i = 0; i < 26; i++) {
		tab1[i] = 97 + i;
		printf("%d ", tab1[i]);
	}
	printf("\n");
	char tab2[100];
	for (int i = 0; i < 26; i++) {
		tab2[i] = 'A' + i;
		printf("%c ", tab2[i]);
	}
	printf("\nASCII dla A-Z: \n");
	for (int i = 0; i < 26; i++) {
		tab2[i] = 65 + i;
		printf("%d ", tab2[i]);
	}
	printf("\n");

	char tab3[100];
	for (int i = 0; i < 10; i++) {
		tab3[i] = 0 + i;
		printf("%d ", tab3[i]);
	}
	printf("\nASCII dla 0-9: \n");
	for (int i = 0; i < 10; i++) {
		tab3[i] = 48 + i;
		printf("%d ", tab3[i]);
	}

	return 0;
}