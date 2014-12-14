#include <stdio.h>

int kopiuj(char zpliku[], char dopliku[]){

	FILE *f, *f2;
	int i = 0;
	char bufor[1000];
	
	f = fopen(zpliku, "r");
	f2 = fopen(dopliku, "w");

	while ((zpliku = fgetc(f)) != EOF){
//	fgets(bufor, 1000, f);
	fprintf(f2, "%c", zpliku); } }

int main(){

	kopiuj("tekst.txt", "kopia.txt");		
	
return 0;
}
