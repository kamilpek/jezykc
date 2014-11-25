#include <stdio.h>

int main(){
	
	int i;
	int n;
	char napis[20];

	printf("Podaj lancuch znakow (max 20): ");
	scanf("%s", napis);

	n=0;
	while (napis[n] !=0) {
		n++; }
	
	for (i=n; i>=0; i--){
		printf("%c", napis[i]); }	
	
	printf("\n");
	
return 0;
}
