#include <stdio.h>

// Odczytywanie calego pliku

int main(){

	FILE *f = fopen("plik.txt", "r");
	if (f){
		// czytanie znak po znaku
		char znak;

		while ((znak = fgetc(f)) != EOF) {
			// czytamy jeden znak
			// znak = fgetc(f);
			// wyswietlamy na ekranie
			printf("%c", znak); }
		
		fclose(f);
	}
	else {
		printf("Blad!\n"); }

return 0;
}
