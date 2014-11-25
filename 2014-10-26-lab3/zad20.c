#include <stdio.h>

int MAX(int a, int b){

	if (a>b) { 
	return a; }
	else if (a<b) { 
	return b; }}

int main(){
	
	int a,b;
	
	printf("Podaj a:\n ");
	scanf("%d", &a);
	printf("Podaj b:\n ");
	scanf("%d", &b);
	
	MAX(a,b);

	printf("Wieksza liczba: %d.\n", MAX(a,b));

	return 0;

}
