#include <stdio.h>

int main (){

	FILE *f = NULL;

	// otwieranie pliku
	// opcje do otwierania pliku
	// r, r+ - czytanie
	// w, w+ - pisanie
	// a - dodawanie do konca pliku
	f = fopen("plik.txt", "w");

	// czy otwarcie pliku nie powiodlo sie
	if (f == NULL){
		printf("Otwarcie pliku nie powiodlo sie!!\n");
		return 1; }
	
	// funkcje zwiazane z zapisem do pliku
	fprintf(f, "Moj pierwszy plik tekstowy\n");
	fputc('x', f); 

	// zamykanie pliku
	fclose(f);	

	// czytanie pliku
	FILE *f2 = fopen("plik.txt", "r");
	if (f2) {
		char bufor[100];

		// czytanie
		fscanf(f2, "%s", bufor);
		printf("Pierwszy wyraz pliku to: %s\n", bufor);

		char znak;
		znak = fgetc(f2);
		znak = fgetc(f2);
		printf("Kolejny znak to: %c\n", znak);
		
		fclose(f2);
}

	else {
		printf("Otwarcie pliku nie powiodlo sie!!\n"); }
	
return 0;
}
