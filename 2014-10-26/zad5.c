#include <stdio.h>

int main(){

int a;
int b;

printf("Podaj A: \n");
scanf("%d", &a);

printf("Podaj B: \n");
scanf("%d", &b);

if(a>0){ 
if(b>0){
printf("A i B są dodatnie\n");
}
else {
printf("A i b mają różne znaki\n");
} } 
else{
printf("A i B są ujemne\n");
}

return 0;

}

