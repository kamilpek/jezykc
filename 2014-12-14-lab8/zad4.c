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
		++i; }

	fclose(f);
	fclose(f2);

return 0;
}

int main(){

	kopiuj("tekst.txt", "kopia.txt");

return 0;
}
