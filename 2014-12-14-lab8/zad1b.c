#include <stdio.h>

int main(){

	FILE *f = NULL;
	int i=0;
	int tab[10];
	int liczba;

	f = fopen("losowe.txt", "r");
	
	for (i=0; i<10; i++) {
		fscanf(f, "%d", &tab[i]); }

	for (i=0; i<10; i++) {
		printf("%d\n", tab[i]); }

	fclose(f);

return 0;
}
