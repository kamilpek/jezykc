#include <stdio.h>

int main(){

	FILE *f = NULL;
	char tekst[1000];

	f = fopen("tekst.txt", "a");	

	printf("Podaj napis (max. 1000).\n");
	fgets(tekst, 1000, stdin);
	fprintf(f, "%s", tekst); 

	fclose(f);

return 0;
}
