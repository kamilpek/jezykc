#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	FILE *f = NULL;
	f = fopen("losowe.txt", "w");
//	int liczby[10];
	int i;

	srand(time(NULL));
	
	for(i=0; i<10; i++){
	
		int licz = rand()%100+1;
		printf("%d\n", licz);
		fprintf(f, "%d\n", licz);
	 }
	
	fclose(f);
	
return 0;
}
