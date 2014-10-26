#include <stdio.h>
#include <stdlib.h>

int main(){

int u;
int i;
int k=rand()%6;

printf("Podaj liczbe z przedzialu 1-5: \n");
scanf("%d", &u);

if(u==k){
printf("Brawo!\n");}
else{
printf("Przegrales!\n");
printf("Wylosowana liczba to: %d\n", k); } 

return 0;

}
