#include <stdio.h>

// Zastosowanie struktur
// cchemy aby funkcja jaka zwracal kilka reczy na raz
// Chcemy aby ta funkcja zwracala calkowita czesc z dzielenia a/b oraz reszte an raz
struct Liczba {
	int czesc_calk;
	int reszta;
};

// Funkcja ktora dzieli a prze b i zwraca struct Liczba
struct Liczba DzielenieZReszta(int a, int b){
	struct Liczba licz;
	
	licz.czesc_calk = a/b;
	licz.reszta = a%b;

	return licz; }

int main(){

	int x = 231050;
	int y = 19290;

	struct Liczba wynik;
	wynik = DzielenieZReszta(x,y);

	printf(" %d / %d = %d reszty %d \n", x, y, wynik.czesc_calk, wynik.reszta );	

return 0;
}
