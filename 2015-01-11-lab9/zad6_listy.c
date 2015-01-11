//zad6_listy.c
// Biblioteka funkcji do listy

// --------------------------------------------------------------
// Program, ktory implementuje prosta liste jednokierunkowa 
//---------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

#include "zad6_listy.h"

// --------------------------------------------------------------
// Funkcja, ktora wstawia liczbe na poczatek listy
// oraz zwraca nowy poczatek listy
SLista* Wstaw(SLista *lista, int liczba)
{
	__PRINTF("DEBUG: Wstaw(%p, %d)\n", lista, liczba);
	
	SLista *nowy = (SLista *)malloc( sizeof(SLista) );
	if (nowy)
	{
		nowy->element = liczba;
		nowy->nastepny = lista;	
	}
	else
	{
		__PRINTF("DEBUG: Wstaw(%p, %d): Nie powiodlo sie, brak pamieci!\n", lista, liczba);
	}
	
	
	return nowy;
}

// --------------------------------------------------------------
// Funkcja, ktora szuka liczby na liscie 
// zwraca element listy badz NULL w przypadku braku
SLista* Szukaj(SLista *lista, int liczba)
{
	
	__PRINTF("DEBUG: Szukaj(%p, %d)\n", lista, liczba);
	SLista *ptr = lista;
	
	while (ptr != NULL)
	{
		__PRINTF("DEBUG:   jestem w elemencie %d \n", ptr->element);
		
		if (ptr->element == liczba)
		{
			return ptr;
		}
		
		ptr = ptr->nastepny;
	}
	
	return NULL;
}

// --------------------------------------------------------------
// Funkcja, ktora czysci cala liste
void Wyczysc(SLista *lista)
{
	__PRINTF("DEBUG: Wyczysc(%p)\n", lista);
	
	SLista *ptr = lista;
	SLista *to_del;
	
	while (ptr)
	{
		to_del = ptr;
		ptr = ptr -> nastepny;
		
		__PRINTF("DEBUG: Wyczysc: usuwam element (%p, %d)\n", to_del, to_del->element);
		free (to_del);	
	}
}

// --------------------------------------------------------------
// Funkcja, ktora wypisuje wszystkie elementy listy
void Wypisz(SLista *lista) 
{
	SLista *ptr = lista;
	
	printf("\n\nElementy listy: ");
	while (ptr)
	{
		printf("%d, ", ptr->element);
		ptr = ptr->nastepny;
	}
	printf("\n\n");
	
} 

// --------------------------------------------------------------
// Funkcja wypelnia losowymi liczbami liste oraz zwraca nowy 
// poczatek listy
SLista* WypelnijLosowymi(SLista *lista, int ilosc)
{
	__PRINTF("DEBUG: WypelnijLosowymi(%p, %d)\n", lista, ilosc);

	// Ustawianie zarodka dla funkcji losujacej
	srand(time(NULL));
	
	int i, liczba;
	for (i=0; i<ilosc; i++)
	{
		__PRINTF("DEBUG:   losuje liczbe (%d)\n", liczba);
		
		liczba = rand()%100;
		lista = Wstaw(lista, liczba);
	}
	return lista;
}
