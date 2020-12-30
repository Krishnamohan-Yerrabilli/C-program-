//Function Category  Type 1: Function with no argument but returns a value
#include<stdio.h>
//Function declaration
int funname();
//starting program
int main(void){//from line 6 to 14, we can consider this is also is an example of Function with no argument but returns a value
    int num1,num2;
    printf("Enter 1st integer: ");
    scanf("%d",&num1);//taking 1st input from user
    printf("Enter 2nd integer: ");
    scanf("%d",&num2);//taking 2nd input from user
    //Function call with no arguments
    funname();
    printf("%d",num1*num2);//Prints final answer
    return 0;
}
//Function definition
int funname(){
    printf("Answer is: ");
    return 0;
}
  
