#include <stdio.h>
#define rozmiar 20

int maks(int x[], int y){
	int licz;
	int maksimum = -32000;
	for (licz = 0; licz < y; licz++){
		if (x[licz] > maksimum)
		maksimum = x[licz];
	}
return maksimum;
}

int main(){

	int tab[rozmiar];
	int licznik;

	for (licznik = 0; licznik < rozmiar; licznik++){
		printf("Wprowadz wartosc z zakresu: ");
		printf("-32000 - 32000 \n");
		scanf("%d", &tab[licznik]);
	}
	
	printf("Najwieksza wartosc: %d\n", maks(tab, rozmiar));
return 0;
}
