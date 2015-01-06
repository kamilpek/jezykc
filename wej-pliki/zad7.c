#include <stdio.h>

int main(){

	FILE *f = fopen("davinci.txt", "r");

	long linia = 1;
	char znak;

	printf("Linia 1: ");
	
	while ((znak = fgetc(f)) != EOF) {
	if (znak == '\n'){
		printf("\n Linia %ld: ", ++linia); }
	else {
		printf("%c", znak); } }
	
	printf("\n");
	fclose(f);

return 0;
}
