#include <stdio.h>

int dlugosc(char napis[20]){
	int d=0;
	while (napis[d] !=0){
		d++; }
	return d;
	}

int palindrom(char napis[20]){
	int n = dlugosc(napis);
	int i = n/2;
	while(i--){
		if(napis[i] != napis[n-i-1]){
			return 0; }
	return 1; } }

int main(){

	char napis[20];	

	printf("Podaj lancuch znakow (max 20): ");
	scanf("%s", napis);

	printf("Dlugosc wynosi: %d\n", dlugosc(napis));	

	if(palindrom(napis)==1){
		printf("Gratulacje! Wyraz jest palindromem!\n"); }
	else {
		printf("Niestety, wyraz nie jest palindromem!\n"); }	

return 0;
}
