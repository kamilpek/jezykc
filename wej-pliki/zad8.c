#include <stdio.h>

void znajdz(char plik[], char wzor[]){

	FILE *f = fopen(plik, "r");
	char bufor[100];
	long wystapienia = 0;

	if(!f){
		printf("Otwarcie pliku nie powiodlo sie!!\n"); }

	while(fscanf(f, "%s", bufor) != EOF){
		printf("%s\n", bufor);
		wystapienia++; }

	fclose(f);
}

int main(){

	znajdz("davinci.txt", "the");
	
return 0;
}
