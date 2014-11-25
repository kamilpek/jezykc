#include <stdio.h>

void Star(int k){
	
	int i;
	
	for(i=0; i<=k; i++){
		printf("*");} 

	printf("\n");
}

void Piramida(int k){

        int i;

        for(i=0; i<=k; i++){
                Star(i); }

	k=k-1;

	for(i=k; i>0; i--){
		Star(i); }
}

int main(){

	int k=6;

	Piramida(k);
	
	printf("\n");
	
	return 0;

}
