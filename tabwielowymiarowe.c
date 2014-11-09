#include <stdio.h>

int main(){

	// tabilca jednowymiarowe
	int wektor[100];

	// tablice wielowymiarowe
	int macierz[10][10];

	int i,j;
	// petla po wierszach
	for (i=0; i<10; i++) {
		for (j=0; j<10; j++) {
			macierz[i][j] = 0; } 
	}

	// wyswietlanie na ekranie
	for (i=0; i<10; i++) {
		for (j=0; j<10; j++) {
			printf("%d,", macierz[i][j]); }
		printf("\b \n");
	}
		
return 0;
}
