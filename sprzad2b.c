#include <stdio.h>

void kwadrat(int liczba)
{
	if (liczba < 0){
		printf("Liczba jest ujemna\n");}
	
	else {
		int i, n;
		for(i=1; i<=n; i++){
			if (i*i == n){
			printf("Tak, liczba %d jest kwadratem liczby %d\n", liczba, i); }
		}
	}
}

int main(){
	
	kwadrat(121);
	return 0;
}
