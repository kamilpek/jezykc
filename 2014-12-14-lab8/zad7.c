#include <stdio.h>

int main(){

	FILE *f = fopen("davinci.txt", "r");

	long numer_linii = 1;

	printf("Linia 1: ");

	char znak;

	// petla czytajaca znak po znaku z pliku
	while ((znak = fgetc(f)) != EOF) {

	// sprawdzamy czy znak to znak nowej linii
	// jesli tak to

	if (znak == '\n') {
		printf("\nLinia %ld: ", ++numer_linii); }	
	else {
		// wyswieltamy ten znak na ekranie
		printf("%c", znak); } }

	printf("\n"); 

	fclose(f);

return 0;
}
