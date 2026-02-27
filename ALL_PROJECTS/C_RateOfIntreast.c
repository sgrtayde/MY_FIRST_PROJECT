#include<stdio.h>
int main(){

float Money , Interest , time , si;

printf("Enter the Money ");
scanf("%f", &Money);

printf("Enter the Interest ");
scanf("%f", &Interest );

printf("Enter the time ");
scanf("%f", &time);

 si = ( Money * Interest * time ) / 100;
printf(" The simpal interest is : %f",si); 






}