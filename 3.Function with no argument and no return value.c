//Function Category  Type 3: Function with no argument and no return value.
#include<stdio.h>
//Function declaration
void funname();
//starting program
int main(void){
    int num1;
    printf("Enter 1st integer: ");
    scanf("%d",&num1);//taking 1st input from user
    if (num1 >10){
        printf("You're Entered number is greater then: ");
        funname();
    }
    else{
        printf("You're Entered number is lesser then: ");
        funname();
    }
    return 0;
}
//Function definition
void funname(){
    printf("10");
}
  
