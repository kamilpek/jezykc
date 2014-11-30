#include <stdio.h>

// obrazek na ekranie

int main(){

	char tablica[11][11] = {0};
	int i, j;

	// czyszczenie tablicy
	for(i=0; i<11; ++i) {
		for(j=0; j<11; ++j){
		tablica[i][j] = 0; } }

	// uzupelnianie znakami
	for(i=0; i<11; ++i) {
		tablica[i][i]="*";
		tablica[10-i][i]="*";
		
		tablica[i][0]="#";
		tablica[i][10]="#";
		
return 0;
}	
