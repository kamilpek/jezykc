#include <stdio.h>

int main(){

	FILE *f = NULL;
	int i=0;
	int tab[10];
	
	f = fopen("losowe.txt", "r");

	for (i=0; i<10; i++){
		fscanf(f, "%d", &tab[i]);
		printf("%d\t", tab[i]); }

	printf(" \n");

	fclose(f);

return 0;
}
