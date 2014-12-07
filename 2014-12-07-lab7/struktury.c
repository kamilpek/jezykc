#include <stdio.h>

struct Kolo {
	int x,y;
	float r; } ;

// przekazywanie calej struktury (tworzenie kopii lokalnej)
// metoda przekazywania argumentu przez wartosc
void wypisz(struct Kolo kolo) {
	if (kolo.x == 0) return;
	printf("Kolo = %d, %d, %f \n", kolo.x, kolo.y, kolo.r); }

// przekazywanie samego adresu pamieci, gdzie sie znajduje struktura
// metoda przekazywania argumentu przez wskaznik
void wypisz_wsk(struct Kolo * kolo){
	if (!kolo) { printf("Bledny adres!\n"); return; }
	printf("kolo = %d, %d, %f, \n", kolo->x, kolo->y, kolo->r); }
	
// Funkcja zerujaca kolo
struct Kolo Zeruj(struct Kolo jakieskolo) {
	jakieskolo.x = 0;
	jakieskolo.y = 0;
	jakieskolo.r = 0; 
	return jakieskolo; }

// Zerowanie przez wskaznik
void Zeruj_wsk(struct Kolo * wskKolo) {
	wskKolo-> x = 0;
	wskKolo-> y = 0;
	wskKolo-> r = 0.0; }
	
int main(){

	// Tworzenie nowego obiektu typu strukturlanego
	struct Kolo kolo1 = {1,5,6.0};
	
	wypisz(kolo1);

	// Wskazniki
	float f = 10.0f;
	float *wsk = &f;
	
	printf("Liczba %f \n", *wsk);

	// Wskazniki do struktur
	struct Kolo *wsk_do_kola;
	wsk_do_kola = &kolo1; 	// przypisujemy do wskaznika adres pod ktorym znajduje sie struktura Kolo
	
	wypisz(*wsk_do_kola);
	wypisz_wsk(wsk_do_kola);	
	
	// Zmiana skladowych
	kolo1.r = 7.0;  		// przez obiekt
	wsk_do_kola->r = 7.0;	// przez wskaznik
	
	// Odwolanie sie skladowych struktury 
	printf("Promien %f \n", kolo1.r ); 			// przez obiekt
	printf("Promien %f \n", wsk_do_kola->r ); 	// przez wskaznik
	printf("Promien %f \n", (*wsk_do_kola).r);	// przez obiekt na ktory wskazuje wskaznik
	
	// Funkcja, ktora zmienia skaldowe struktury, ktora przekazemy prze wskaznik
	// kolo1 = Zeruj(kolo1);
	
	Zeruj_wsk(wsk_do_kola);
	wypisz(kolo1);
		
	return 0; }
