#include <stdio.h>

int main(){

	int tab[20];
	int *wskaznik;
	
	tab[0] = 5;
	wskaznik = tab;
	
	printf("1. elemnet tablicy zawiera wartosc: %d \n", *wskaznik);
	
return 0;
}
	
