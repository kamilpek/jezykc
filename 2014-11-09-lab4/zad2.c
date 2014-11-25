#include <stdio.h>

int main(){

	char napis[20];

	printf("Podaj lancuch znakow (max 20): ");
	scanf("%s", napis);

	int i=0;
	while (napis[i] !=0) {
		printf("%c*", napis[i]);
		i++; }
	
	printf("\b");	
	printf("\n");	

return 0;
}
