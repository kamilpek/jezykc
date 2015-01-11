// ------------------------------------------------------
// Program, ktory sortuje 100 liczb z zakresu 0-49 metoda
// przez zliczanie
// ------------------------------------------------------
#include<stdio.h>




// Funkcja, ktora losuje liczby i umieszcza w tab
void Losuj(int tab[])
{
	srand(time(NULL));
	int i;
	for (i=0; i<100; i++)
	{
		tab[i] = rand()%50;
	}
}
  
// Funkcja, ktora drukuje zawartosc tab
void Wypisz(int tab[])
{
	int i;
	for (i=0; i<100; i++)
	{
		printf("%d, ", tab[i]);
	}
}

// Funkcja, ktora sortuje zrodlo przez zliczanie, 
// a rezultat umieszcza w cel
void SortZliczanie(int zrodlo[], int cel[])
{
	int i;
	int licznik[50];
	
	// 1. Zerowanie tablicy licznik
	for(i=0; i<50; i++)
	{
		licznik[i] = 0;
	}
	
	// 2. Wypelnianie tablicy licznik	
	for(i=0; i<100; i++)
	{
		licznik[ zrodlo[i] ] ++;
	}
		
	// 3. Modyfikacja tablicy licznik
	for(i=1; i<50; i++)
	{
		licznik[i] += licznik[i-1];
	}
	
	// 4. Umieszczanie elementow na wlasciwych 
	// pozycjach	
		
	for(i=100-1; i>=0; i--)
	{		
		cel[ licznik[zrodlo[i]]-1] = zrodlo[i];
		licznik[zrodlo[i]]--;
	}
}

int main()
{
	int tab[100];
	int wynik[100];
	int i, k;
	
	// Losujemy liczby
	Losuj(tab);
	
	printf("Przed sortowaniem: \n");
	Wypisz(tab);
	
	// Sortujemy przez zliczanie
	SortZliczanie(tab, wynik);
	
	
	printf("\nPo sortowaniu: \n");
	Wypisz(wynik);

	return 0;
	
}
