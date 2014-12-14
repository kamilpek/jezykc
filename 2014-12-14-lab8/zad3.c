#include <stdio.h>

int czytaj(char nazwapliku[], char bufor[]){
	
	FILE *f = NULL;

	char znak;
	int i = 1;

	f = fopen("tekst.txt", "r");

	if (f == NULL){
                printf("Otwarcie pliku nie powiodlo sie!!\n");
                return 0; }
	else {
		while ((znak = fgetc(f)) != EOF){
		bufor[i] = znak;
		i++; }		
		//fgets(bufor, 1000, f); }
		fclose(f);
		return 1; }
}

int main() {
	
	FILE *f = NULL;
	
	f = fopen("tekst.txt", "r");
	
	char bufor[1000];
	czytaj("tekst.txt", bufor);
	
	printf("%s", bufor);		
		
return 0;
}
