#include <stdio.h>

int czytaj(char nazwapliku[], char bufor[]){
	
	FILE *f = NULL;

	char znak;
	int i = 1;

	f = fopen(nazwapliku, "r");

	if (f == NULL) {
		printf("Otwarcie pliku nie powiodlo sie!!\n");
		return 0;
	}

	else {
		while ((znak = fgetc(f)) != EOF){
		bufor[i] = znak;
		i++; }
		fclose(f);
		return 0; 
	}
}

int main(){

	char nazwapliku[20];

	printf("Prosze podac nazwe pliku wraz z rozszerzeniem.\n");
	scanf("%s", nazwapliku);

	printf("\nDziękuję, przystępuję do działania!\n");
	printf("Oto zawartosc pliku: \n \n");

	FILE *f = NULL;

	f = fopen(nazwapliku, "r");
	
	char bufor[1000];
	czytaj(nazwapliku, bufor);	
	printf("%s", bufor);

	fclose(f);

return 0;
}
