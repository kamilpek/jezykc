#include <stdio.h>

int czytaj(char nazwapliku[], char bufor[]){
	
	FILE *f = fopen("tekst.txt", "r");
	char znak;
	int i = 0;

	if (!f){
                printf("Otwarcie pliku nie powiodlo sie!!\n");
                return 0; }
	
	while ((znak = fgetc(f)) != EOF){
		bufor[i] = znak;
		i++; }		
		
	bufor[i]=0;
	fclose(f);

return 1;
}

int main() {

	char bufor[1000];
	char nazwapliku[20] = "tekst.txt";

	if (czytaj(nazwapliku, bufor)){
		printf("%s", bufor); }

	else {
		printf("ERROR! Nie udalo sie otworzyc pliku!\n");}
		
return 0;
}
