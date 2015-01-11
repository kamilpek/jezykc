//zad6_main.c

// Ladowanie funkcji do obslugi listy
#include "zad6_listy.h"

// Kompilacja programu ktory sklada sie z wielu plikow zrodlowych
// 
// 1. Kompilujemy wszystko na raz i od nowa
// gcc zad6_main.c zad6_listy.c -o zad6
//
// 2. Kompilujemy poszczegolne pliki - tworzymy pliki obiektowe
// gcc zad6_main.c -c // stworzyl plik zad6_main.o
// gcc zad6_listy.c -c // stworzyl plik zad6_main.o
//
// 3. Konsolidacja - laczenie plikow obiektowych
// gcc zad6_main.o zad6_listy.o -o zad6.out

int main()
{
	
	// Lista pusta
	SLista *lista = NULL;
	
	// Dodawanie do listy 20 losowych elementow
	lista = WypelnijLosowymi(lista, 20);
	
	// Wypisywanie listy na ekranie
	Wypisz(lista);
	
	// Czyszczenie (zwalnianie pamieci)
	Wyczysc(lista);

return 0;
}
