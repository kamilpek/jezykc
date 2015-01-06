#include <stdio.h>
#include <string.h>

int szukaj(char plik[], char nazwisko[]){

	FILE *f = fopen(plik, "r");
	int liczba;
	char bufor[100];

	if(!f){
		return 0; }

	do {
		fscanf(f, "%d %[^\n]s", &liczba, bufor);
	} while (strcmp(bufor, nazwisko));

	fclose(f);

return liczba;
}

int main(){

	char nazwisko[50];
	int liczba;

	printf("Podaj nazwisko do wyszukania: ");
	scanf("%s", nazwisko);

	liczba = szukaj("nazwiska.txt", nazwisko);

	if (liczba != 0){
		printf("Nazwisko %s wystepuje %d razy.\n", nazwisko, liczba); }
	else {
		printf("ERROR!!\n"); }

return 0;
}
