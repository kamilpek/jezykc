#include <stdio.h>

void pobierzliczbe(int *a){
	scanf("%d", a); }	

int main(){

	int liczba;
	printf("Podaj liczbe: ");
	pobierzliczbe(&liczba);
	printf("Liczba to %d \n", liczba);

return 0; }
