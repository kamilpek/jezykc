#include <stdio.h>

int main(){

	float Promien;
	printf("Podaj promien w cm\n");
	scanf("%f", &Promien);

	if (Promien<0){
		printf("Tego nie potrafie!\n"); }
	else {
	float wynik;
	wynik=3.14*Promien*Promien;
	printf("Potrzebuje %f cm2 materialu.\n", wynik); }

return 0;
}


