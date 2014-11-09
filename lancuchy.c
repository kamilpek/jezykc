#include <stdio.h>

int main() {

	// Strin = Lancuchy znakow = tablica znakow = tablica char'ow
	// moze przechowywac napis o maksymalnej dlugosci 99 znakow
	
	char napis[100];

	napis[0] = 'k';
	napis[1] = 'o';
	napis[2] = 't';
	napis[3] = '\n';
	napis[4] = 0;
	printf("%s", napis);
	
	// deklaracja napisu
	char imie[] = {'m', 'a', 'c', '\n', 0};
	printf("%s", imie);
	
	// deklaracja napisu za pomoca " "
	char miesiac[100] = "listopad";
	printf("%s\n", miesiac);

	// wypisywanie poszczegolnych znakow
	printf("%c\n", miesiac[4]);
	
	int i;
	i=0;
	while (miesiac[i] !=0) {
		printf("%c\n", miesiac[i]);
		i++; }
		
	// zapytamy o kolor
	char kolor[100];
	printf("Podaj kolor: ");
	scanf("%s", kolor);

	printf("Kolor %s\n", kolor);

return 0;
}
