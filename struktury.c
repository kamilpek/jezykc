#include <stdio.h>

// Program w ktorym bedziemy potrzebowali wiele okregow
// Definicja okrag: srodek x,y oraz promien r

// Bedziemy potrzebowali 10 okregow

void wypisz(int x, int y, float r){
	printf("Okrag = (%d, %d, %f )\n", x, y, r); }

float pole(int x, int y, int r){
	return 3.14 * r *r; }

int main(){

	// Tablica 10 okregow
	int x[10];
	int y[10];
	float r[10];

	// uzupelniamy pierwszy okrag (1,2,5,0)
	x[0] = 1;
	y[0] = 2;
	r[0] = 5.0;

	wypisz(x[0], y[0], r[0]);
	printf("Pole okregu to %f\n", pole(x[0], y[0], r[0]));

	// Uzupelniamy kolejny okrag
	x[1] = 3;
	y[1] = 4;
	r[1] = 2.0;
	
	wypisz(x[1], y[1], r[1]);
	printf("Pole okregu to %f\n", pole(x[1], y[1], r[1]));	


return 0;
}
