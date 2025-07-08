#include<stdio.h>
#include<math.h>

double division(double ,double );

int modulus(int, int);
  void print_menu();




int main(){
    int choice;
    double first,second,result;
    while (1){
        print_menu();
        scanf("%d",&choice);
        if (choice == 7) {
            break;
        }


        if (choice < 1 ||  choice > 7){
            fprintf(stderr,"invalid menu choice");
            continue;

        }




        printf("Please Enter the first number :");
        scanf("%lf",&first);
        printf("Know, Enter the second number :");
        scanf("%lf",&second);

        switch (choice)
            {
            case 1:
                result = first + second;
                break;
            case 2: 
                result = first - second;
                break;
            case 3:
                result = first * second;
                break;
            case 4:
                result = division(first,second);
                break;
            case 5:
                result = modulus(first,second);
                break;
            case 6:
                result = pow(first, second);
                break;
            
        }
        if (!isnan(result)) {
        printf("Result of operation is : %.f", result);
        }
    };

    return 0;

}

double division(double a,double b){
    if(b == 0){
        fprintf(stderr,"invalid argument for division\n");
        return NAN;
    }
    else{
        return a / b;
    }
 }
int modulus(int a, int b){
    if(b == 0){
        fprintf(stderr,"invalid argument for modulus\n");
        return NAN;
    }
    else{
        return a % b;
    }
 }

void print_menu(){
    printf("\n------------------------------------------\n");
    printf("Welcomr to the simpal calculator \n");
        printf("\nchoose one of the following option \n");
        printf("\n1 Add");
        printf("\n2 Subtract");
        printf("\n3 Multiply");
        printf("\n4 Divid");
        printf("\n5 Modulus");
        printf("\n6 Power");
        printf("\n7 Exit\n");
        printf("Now,enter your choice :");
    
}