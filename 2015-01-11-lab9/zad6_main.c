//zad6_main.c

// Ladowanie funkcji do obslugi listy
#include "zad6_listy.h"

// Kompilacja programu ktory sklada sie z wielu plikow zrodlowych
// gcc zad6_main.c zad6_listy.c -o zad6

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
