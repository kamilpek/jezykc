#include <stdio.h>
#include <string.h>

// Program w ktorym bedziemy potrzebowali wiele okregow
// Definicja okrag: srodek x,y oraz promien r

// Bedziemy potrzebowali 10 okregow

// Definicja struktury
struct Okrag { 
	int x;
	int y;
	float r;
};

void wypisz(struct Okrag o){
	printf("Okrag = (%d, %d, %f )\n", o.x, o.y, o.r); }

float pole(struct Okrag o){
	return 3.14 * o.r * o.r; }

struct Okrag Jednostkowy(){
	struct Okrag przyklad;
	przyklad.x = 0;
	przyklad.y = 0;
	przyklad.r = 1.0;
	//strcpy(przyklad.kolor);
	return przyklad; }

// Zastosowanie struktur
// cchemy aby funkcja jaka zwracal kilka reczy na raz
// Chcemy aby ta funkcja zwracala calkowita czesc z dzielenia a/b oraz reszte an raz
int DzielenieZReszta(int a, int b){

}

int main(){

	// Tablica 10 okregow
	struct Okrag Tablica[10];

	// uzupelniamy pierwszy okrag (1,2,5,0)
	Tablica[0].x = 1;
	Tablica[0].y = 2;
	Tablica[0].r = 5.0;

	// Stworzenie zmiennej typu Okrag
	struct Okrag o1;
	o1.x = 1;
	o1.y = 2;
	o1.r = 5.0;	

	wypisz(Tablica[0]);
	printf("Pole okregu to %f\n", pole(Tablica[0]));

	// Uzupelniamy kolejny okrag
	Tablica[1].x = 3;
	Tablica[1].y = 4;
	Tablica[1].r = 2.0;
	
	wypisz(Tablica[1]);
	printf("Pole okregu to %f\n", pole(Tablica[1]));	

	Tablica[2] = Jednostkowy(); // aby ta funckaj zwracala (0,0,1);
	
	wypisz(Tablica[2]);

return 0;
}
