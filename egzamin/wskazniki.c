#include <stdio.h>

// wskazniki

// &ZMIENNA - zwraca adres komrki pod ktora znajduje sie ZMIENNA
// *WSK - zwraca nam zawartosc komroki na ktora wskazuje WSKc

// 1. Funkcje ze wskaznikami

void DodajJeden(int n){
	n = n + 1; }	

void DodajJedenWsk(int *n){ 		// wskaznik na liczbe
	int nowa = *n;			// przypisujemy do liczby zawartosc komrki pod adresem 
	nowa++;				// zwiekszamy liczbe
	
	*n = nowa;			// umieszamy zmodyfikowana liczba pod adres
}

int main(){

	int a = 8; 			// deklarujemy zmienna a
	int b = 5;
	float liczba = 123.456;
	
	// deklaracja zmiennej ktora wskazauje na
	// adres pamieci pod ktorym TYP int
	int *c;
	float *d = &liczba;
	
	// zmienna przechowuje adrees komorki b;
	c = &b;
	
	// wysiwetlanie adresu
	printf("Liczba pod adresem %p to %d\n", c, *c);
	printf("Liczba pod adresem %p to %f\n", d, *d);

	printf("a= %d\n", a);		// wyswietlamy a
	DodajJeden(a);			// wywolujemy funkcje
					// ktorej przekazujemy kopie zmiennej a
	printf("a= %d\n", a);

	DodajJedenWsk(&a);		// dp funkcji podajemy adres a
	printf("a= %d\n", a);		// wyswietlamy a

return 0;
}
