#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char bufor[1000];
	int n;
	int i;
	
	for(i=1; i<1000; i++){
		bufor[i]=0; }
	
	printf("Podaj napis\n");
	scanf("%[^\n]s", bufor[1000]);

	n = strlen(bufor);
	
	char *napis;
	
	napis = malloc(n * sizeof(int));
	
	if(napis){
		strcpy(napis, bufor); 
		printf("%s\n", napis); }
	else {
		printf("ERROR !!.\n"); }
		
	free(bufor);
	
return 0;
}
