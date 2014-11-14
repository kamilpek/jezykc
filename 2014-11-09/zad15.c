#include <stdio.h>

int main(){

	int tab[4][10];					// deklaracja tablicy
	int a, b, c ,d;
	int i, j;
		
	printf(" ZADANIE A) \n");			// zadanie a) same jednyki
	for(i=0; i<4; i++) {				// wypelnianie tablicy
		for(j=0; j<10; j++) { 
			tab[i][j]=1; } }
	
	for(i=0; i<4; i++){				// wypisywanie zawartości tablicy
		printf("[ ");
		for(j=0; j<10; j++){
			printf("%d ", tab[i][j]); }
		printf("\b ] \n"); }
	
	printf(" ZADANIE B) \n");			// zadanie b)
	for(i=0; i<4; i++) {
		for(j=0; j<10; j++) {
			tab[i][j]=i+1; } }
			
	for(i=0; i<4; i++) {				// wypisywanie
		printf("[ ");
                for(j=0; j<10; j++) {
			printf("%d ", tab[i][j]); }
	        printf("\b ] \n"); }

	printf(" ZADANIE C) \n");			// zadanie c)
	for(i=0; i<4; i++){
		for(j=0; j<10; j++){
			tab[i][j]=(i+1)*(j+1); } }	// wzor matematyczny do tabeli

        for(i=0; i<4; i++) {				// wypisywanie
                printf("[ ");
                for(j=0; j<10; j++) {
                        printf("%3d ", tab[i][j]); }
                printf("\b ] \n"); }

	printf(" ZADANIE D) \n");			// zadanie d)
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			tab[i][j]=(i+1)*(j*10); } }	// wzor matemtyczny do tabeli

        for(i=0; i<4; i++) {				// wypisywanie
                printf("[ ");
                for(j=0; j<10; j++) {
                        printf("%3d ", tab[i][j]); }
                printf("\b ] \n"); }



return 0;
}
