#include <stdio.h>

int szukaj(char plik[], char nazwisko[]){

	FILE *f;
	int liczba;
	char bufor[100];

	f = fopen(plik, "r");
	
	if(!f){
		return 0; }

	do {
		fscanf(f, "%d %[^\n]s",&liczba, bufor); }

	while (strcmp (bufor, nazwisko));

	fclose(f);

return liczba;
}


int main(){
	
	char nazwisko[50];
	int liczba;
	
	printf("Podaj nazwisko do wyszukiwania: ");
	scanf("%s", nazwisko);

	liczba = szukaj("nazwiska.txt", nazwisko);

	if ( liczba != 0 ){
		printf("Nazwisko %s wystepuje %d razy.\n", nazwisko, liczba); }

	else {
		printf("ERROR!!\n"); }
return 0;
}
