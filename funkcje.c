#include <stdio.h>

void Wyswietl_Menu(){
printf("-------------\n");
printf("--- MENU ----\n");
printf("=============\n");
}

void Kolejne_Liczby(liczba) { 
int i;
for (i=1; i<=liczba; i++){
printf("%d\n", i); } }

int suma_kolejnych_liczb(int ostatnia){
int i;
int suma = 0;
for (i=1; i<= ostatnia; i=i+1){
suma = suma + i; }
return suma; }

int main(){

Wyswietl_Menu();
Kolejne_Liczby();
printf(" \n");

suma_kolenych_liczb(10);

return 0;

}




