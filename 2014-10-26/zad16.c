#include <stdio.h>

void Liczba(){

int a;

	printf("Podaj liczbe calkowita: \n");
	scanf("%d", &a);

if(a>0){
	printf("Podana liczba jest dodatnia!\n");}
else {
	printf("Podana licbza jest ujemna!\n"); }
}

int main(){

	Liczba();

return 0;

}

