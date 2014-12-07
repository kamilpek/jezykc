#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Alokacja pamieci !!

int main(){
	
	// deklaracja tablicy 100 elementow
	int tab[100];
	
	// alokacja pamieci
	int *nowy_obszar_pamieci;
	
	nowy_obszar_pamieci = malloc(100 * sizeof(int)); // malloc przyjmuje ilosc bajtow
	
	if (nowy_obszar_pamieci) {
		// wyzerowanie pamieci
		memset(nowy_obszar_pamieci, 0, 100 * sizeof(int));
		
		// w tym miescju zmienna
		// nowy_obszar_pamieci jest tablica 100 integerow
		int i=0;
		for(i=0; i<100; i++){
				printf("%d, ", nowy_obszar_pamieci[i]); }	}
		else {
		printf("Inicjalizacja pamieci nie powiodla sie!\n"); }
	
		// zwalnianie pamieci
		free(nowy_obszar_pamieci);
	
	return 0;
}
