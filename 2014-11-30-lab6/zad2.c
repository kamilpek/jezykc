#include <stdio.h>

void zamien(int *x, int *y){	// xamiania miejscami a i b;
	int tmp = *x;
	*x = *y;
	*y = tmp;	
}

int main(){

	int a = 5;
	int b = 1;
	zamien(&a,&b);
	printf("a= %d a b = %d \n", a, b);

	// wskazniki do poszczegolnych lementow tablicy
	int tablica[100];
	int i;
	for(i=0; i<100; i++){
		tablica[i] = 2*i; }
	
	// wskaznik do typu int
	int *wsk;
	
	// ustawiamy wskaznik na pierwszy elemnt tablicy
	wsk = &tablica[0];	
	wsk = tablica;	
	for(i=0; i<100; i++){
		wsk = &tablica[10];
		printf("Element %d to %d \n", i, *wsk); 
		*wsk = *wsk + 1;	// zwiekszamy ity elemnt tablicy
		wsk = wsk + 1; 		// wskaznik przeskoczy na kolejny element tablicy
	}
	
return 0;
}
