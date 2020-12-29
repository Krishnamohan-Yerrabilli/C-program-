//Function Category  Type 1: Function take arguments but does not return any value(Returntype is Void)
#include<stdio.h>
//Function declaration
void funname(char apple[10],char few[10]);
//starting program
int main(void){
    printf("Enter a string: ");
    char apple[10],few[10];
    scanf("%s",apple);
    //Function call
    funname(apple,few);
}
//Function definition
void funname(char apple[10],char few[10]){
    int s = 0;
    for (int i=0;i<10;i++){
        few[i] = apple[s];
        s++;
    }
    printf("%s",few);
}
