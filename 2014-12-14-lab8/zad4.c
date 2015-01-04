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

}

int main(){

	kopiuj("tekst.txt", "kopia.txt");

//	if ( kopiuj("tekst.txt", "kopia.txt") ){
//		printf("Wszystko w porzadku! Gratulacje!/n"); }
//
//	else {
//		printf("Wystapil blad! Operacja się nie powiodla!\n"); }	

return 0;
}
