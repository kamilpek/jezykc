#include <stdio.h>

int czytosamo(char napis1[20], char napis2[20]){
	int i=0;
	int n;
	for(i=0; i<=20; i++){
		if(napis1[i] == napis2[i]){
			return 1; }
	return 0; } }

int main(){
	
	char napis1[20];
	
	char napis2[20] = "supertajnehaslo";	// deklaracja napisu do porownania
	
	printf("Podaj haslo: \n");
	scanf("%s", napis1);

	if(czytosamo(napis1, napis2) == 1){
		printf("Zalogowano do supertajnego systemu\n"); }
	else {
		printf("Bledne haslo\n"); }
return 0;
}
