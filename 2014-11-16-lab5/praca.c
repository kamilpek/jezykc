#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum DZIEN { PRACUJACY, WOLNY };


// Funkcja pracujaca, 
int Pracownik(enum DZIEN d)
{
	// jesli dzien jest pracujacy
	if (d == PRACUJACY)
	{
		printf("Dzis pracuje!\n");
	}
	// jesli dzien jest wolny
	else
	{
		printf("Dzis odpoczywam!\n");
	}
}

int main(void)
{
	// Tablica reprezentuje grafik pracy w ciagu roku,
	// bedzie zawierala wartosci PRACUJACY lub WOLNY
	int kalendarz[365];
	
	// Uzupelniamy kalendarz w sposob pseudolosowy
	srand(time(NULL));
	int i;
	for(i=0; i<365; i++) {
		if (rand()%2) 
			kalendarz[i] = PRACUJACY;
		else
			kalendarz[i] = WOLNY;
	}
	
	
	// Wykonujemy metode dla kazdego dnia roku
	for (i=0; i<365; i++)
	{
		Pracownik(kalendarz[i]);
	}
	
    return 0;
}
