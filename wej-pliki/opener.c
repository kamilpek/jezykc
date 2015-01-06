#include <stdio.h>

int main(){

	FILE *f = NULL;
	int i=0;
	int tab[10];
	char plik[10];

	printf("Podaj nazwe pliku wraz z rozszerzeniem.\n");
	scanf("%s", plik);
	
	f = fopen(plik, "r");

	for (i=0; i<10; i++){
		fscanf(f, "%d", &tab[i]);
		printf("%d\n", tab[i]); }

//	printf(" \n");

	fclose(f);

return 0;
}
