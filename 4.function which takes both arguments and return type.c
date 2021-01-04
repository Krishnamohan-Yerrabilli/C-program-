//function which takes both arguments and return type.
//Simple program to add two numbers.
#include<stdio.h>
int nummy(num1,num2);
int main(void){
    int nummy1,nummy2,callfun;//creating variable's
    printf("Enter 1st Number: ");
    scanf("%d",&nummy1);
    printf("Enter 2nd Number: ");
    scanf("%d",&nummy2);
    //calling function
    callfun = nummy(nummy1,nummy2);
    printf("The answer is: %d",callfun);
    return 0;
}
//defining function
int nummy(num1,num2){
    return num1 + num2;
}
