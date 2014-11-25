#include <stdio.h>
#include <math.h>

int main(){

int a;
int i;
int x;
int taba[20];
int tabb[20];
int tabc[20];
int tabd[20];
int tabe[20];
int tabf[20];

/* Zadanie a) od 1 do 20 */
printf("Zadanie a) \n");
for(i=0; i<20; i++){
taba[i] = i+1; }
for(i=0; i<20; i++){
printf("%d, ", taba[i]); }
printf("\n");

/* Zadanie b) od 20 do 1 */
printf("Zadanie b) \n");
for(i=21; i>=2; i--){
tabb[i] = i-1; }
for(i=21; i>=2; i--){
printf("%d, ", tabb[i]); }
printf("\n");

/* Zadanie c) */
printf("Zadanie c) \n");
for(i=0; i<=38; i=i+2){
tabc[i] = i+2; }
for(i=0; i<=38; i=i+2){
printf("%d, ", tabc[i]); }
printf("\n");

/* Zadanie d) {1, 4, 9, 16, ..., 400} */
printf("Zadanie d) \n");
for(i=0; i<20; i++){
tabd[i] = i+1; }
for(i=0; i<20; i++){
printf("%d, ", tabd[i]); }
printf("\n");

/* Zadanie e) */
int j;
printf("Zadanie e) \n");
for(i=0; i<20; i++){
for(j=0; j<20; j++){
x=(float)pow(2,j); }
tabe[i] = x;
}
for(i=0; i<20; i++){
printf("%d, ", tabe[i]); }
printf("\n");

return 0;

}
