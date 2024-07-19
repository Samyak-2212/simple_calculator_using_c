#include <stdio.h>
#include<string.h>
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mult(int a, int b){
    return a*b;
}
int div(int a, int b){
    return a/b;
}
int rem(int a, int b){
    return a%b;
}

int main(){
    int a;
    int b;
    char opp;
    
    printf("This is a calculator \n");

    printf("Enter your first number:");
    scanf("%d", &a);

    printf("Enter your second number:");
    scanf("%d", &b);
    fflush(stdin);

    printf("Enter operation(+, -, *, /, r(remainder):");
    scanf("%c", &opp);



   switch (opp){
    
   case '+' :
    printf("%d", add(a, b));
    break;

   case '-':
    printf("%d", sub(a, b));
    break;

   case '*':
    printf("%d", mult(a, b));
    break;

   case '/':
    printf("%d", div(a, b));
    break;
   
   case 'r':
   if (a>b){
    printf("%d", rem(a, b));
   }
   else {printf("ERROR: Dividend is smaller than divisor!!!");}
    break;

   default:
    printf("Invalid Operator!!!");
    break;
 
return 0;
}

}