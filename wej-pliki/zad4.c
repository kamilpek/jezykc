#include <stdio.h>

int kopiuj(char zpliku[], char dopliku[]){

	FILE *f, *f2;
	int i = 0;
	char znak;

	f = fopen(zpliku, "r");
	f2 = fopen(dopliku, "w");

	if (!f || !f2){
		return 1; }

	while ((znak = fgetc(f)) != EOF){
		fprintf(f2, "%c", znak);
		++i;
	}

	fclose(f);
	fclose(f2);

return 0;

}

int main(){

	char nazwapliku[20];

	printf("Proszę podać nazwę pliku do skopiowania wraz z rozszerzeniem.\n");
	scanf("%s", nazwapliku);

	if (kopiuj(nazwapliku, "kopia.txt") == 1){
		printf("ERROR, nie udało się wykonać operacji!!\n"); }

	else {
		kopiuj(nazwapliku, "kopia.txt");	
		printf("Skopiowałem zawartosc pliku %s do pliku kopia.txt\n", nazwapliku); }

return 0;
}
