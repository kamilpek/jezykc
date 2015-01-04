#include <stdio.h>

void znajdz(char nazwapliku[], char wzor[]){
	
	FILE *f;
	char bufor[100];
	long wystapienia = 0;

	f = fopen(nazwapliku, "r");

	if(!f){
		printf("Otwarcie pliku nie powiodło się!\n"); }

	while(fscanf(f, "%s", bufor) != EOF){
		printf("%s\n", bufor);
		wystapienia; }

	fclose(f); }

int main(){
	
	znajdz("davinci.txt", "the");

return 0;
}
