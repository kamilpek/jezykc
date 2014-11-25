#include<stdio.h>

int main(){

long i;
long lucas[20];

for(i=1; i<20; i++){
i=(i-1)+(i-2); 
lucas[i] = i; }

for(i=1; i<20; i++){
printf("%ld, ", lucas[i]); }
printf("\n");

return 0;

}
