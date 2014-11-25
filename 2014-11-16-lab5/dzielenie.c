#include <stdio.h>

struct Liczba
{
	int czesc_calkowita;
	int reszta;
};

// Funkcja, ktora dzieli liczba a przez b, podaje wartosc 
// dzielenia calkowitego oraz reszte za pomoca struktury Liczba
struct Liczba dzielenie_z_reszta(int a, int b)
{
	// dopisac 
}

int main()
{
	
	int a, b;
	
	printf("Podaj dwie liczby calkowite dodatnie:\n");
	scanf("%d%d", &a, &b);
	
	printf("Wynik dzielenia %d przez %d to \n", a, b);
	
	// Tworzymy obiekt, ktory zawiera dwie liczby
	struct Liczba c;
	// ponizsza funkcja zwroci nam te dwie liczby jako oddzielne pola 
	// w strukturze Liczba
	c = dzielenie_z_reszta(a,b);
	
	// Teraz wystarczy tylko je wyswietlic
	printf("%d oraz reszta %d\n", c.czesc_calkowita, c.reszta);
	
	
	return 0;	
}
