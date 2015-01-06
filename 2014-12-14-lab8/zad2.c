#include <stdio.h>

int main(){

	FILE *f = fopen("tekst.txt", "a");
	char tekst[1000];

	printf("Podaj napis (max. 1000).\n");
	fgets(tekst, 1000, stdin);
	fprintf(f, "%s", tekst); 

	fclose(f);

return 0;
}
