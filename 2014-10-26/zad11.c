#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));
int u;
int i;
int l;
int a, b, c, d, e;
a = b = c = d = e = 0;
int k=rand()%6;

for(l=1; l<=5; l++){

printf("Podjescie numer: %d\n", l);
printf("Podaj liczbe z przedzialu 1-5: \n");
scanf("%d", &u);

switch(u){
case 1: a=a+1; break;
case 2: b=b+1; break;
case 3: c=c+1; break;
case 4: d=d+1; break;
case 5: e=e+1; break;
default: printf("ERROR, podales zla liczbe\n"); break;
}}

printf("%d, %d, %d, %d, %d\n", a, b, c, d, e);

if(u==k){
if(u==(k-1)){
printf("Blisko! ale przegrales"); }
printf("Brawo!\n");}
else{
printf("Przegrales!\n");
printf("Wylosowana liczba to: %d\n", k); }

return 0;
}
