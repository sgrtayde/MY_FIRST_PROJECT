#include<stdio.h>
int main(){

    int  n;
    printf("Enter percentage : ");
    scanf("%d",&n);

    if( n>80){
        printf(" A greade");
    }

    else if (n>60){
        printf(" B greade");
    }
    
    else if ( n>50){
        printf(" C greade");
    }
    
    else if( n<40){
        printf(" D gread");
    }
    else{
        printf(" faile");
    }
 
}
