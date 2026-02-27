#include<stdio.h>
int main(){
    
    int a;
    printf("Enter the age of harshal : ");
    scanf("%d",&a);

    int b;
    printf("Enter the age of ritesh : ");
    scanf("%d",&b);

    int c;
    printf("Enter the age of sagar : ");
    scanf("%d",&c);

    if( a<b && a<c){
        printf("youngest of three : %d",a);
    }

    if( b<a && b<c){
        printf(" youngest of three : %d",a);
    }

    if(c<a && c<b ){
    printf("youngest of three : %d",a);


    }




}
