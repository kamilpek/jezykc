#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum DZIEN { PRACUJACY, WOLNY };


// Funkcja pracujaca, 
int Pracownik(enum DZIEN d)
{
	// zmienne statyczne
	static int i = 0;	
	static int j = 0;
	// int dzien = 1;	

	// jesli dzien jest pracujacy
	if (d == PRACUJACY)
	{
		// dzien=dzien+1;
		// printf("Dzien %d ", dzien);

		i=i+1; // zwiekszanie licznika dni

		if(i<7){
			printf("Dzis pracuje!\n"); }

		else {
			j=j+1; // zwiekszanie licznika dni wolnych na zadanie
			printf("Dosc!! Biore dzien wolny!\n");
			i=0; }

		if(j>=5){
			printf("Pracownik zostal wyrzucony z pracy!!\n");
			return 1; }
	}

	// jesli dzien jest wolny
	else {
	printf("Dzis odpoczywam!\n");
	i = 0; 	}

return 0;
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
