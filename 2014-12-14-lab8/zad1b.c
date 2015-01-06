#include <stdio.h>

int main(){

	FILE *f = fopen("losowe.txt", "r");
	int i=0;
	int tab[10];
	
	for (i=0; i<10; i++) {
		fscanf(f, "%d", &tab[i]);
		printf("%d\n", tab[i]); }

	fclose(f);

return 0;
}
