#include <stdio.h>

int main(){

// Deklaracja tablicy
int tablica[50];	//tablica dla 50 zmiennych typu int
int tab2[10] = {1,2,3,4,5,6,7};
int tab3[] = {123,321,234};

// Uzupelnianie tablicy koeljnymi liczbami naturlanymi od jeden
int i;
for(i=0; i<50; i++){
tablica[i] = i+1; }

// Wypisywanie wszystich lementow tablicy odzielone przecinkiem
for(i=0; i<50; i++){
printf("%d, ", tablica[i]); }

printf(" \n");

return 0;

}
