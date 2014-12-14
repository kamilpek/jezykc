#include <stdio.h>

int main(){

	FILE *f = fopen("nazwiska.txt", "r");
	int liczba;
	long suma;
	char bufor[100];
	
	f = fopen("nazwiska.txt", "r");	

	suma = 0;	
		
	do {
	fscanf(f, "%d %[^\n]s", &liczba, bufor); 		
	suma = suma + liczba; 
	} while (liczba !=0);

	printf("Liczba osob to: %ld\n", suma);

return 0;
}
