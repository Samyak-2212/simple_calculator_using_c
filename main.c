#include <stdio.h>
int add(int a, int b){
    int add;
    add = a + b;
    return a+b;
}
int sub(int a, int b){
    int sub;
    sub = a-b;
    return a-b;
}
int mult(int a, int b){
    int mult;
    mult = a*b;
    return a*b;
}
int div(int a, int b){
    int sub;
    sub = a/b;
    return a/b;
}
int rem(int a, int b){
    int rem;
    rem = a%b;
    return a%b;
}

int main(){
    int a;
    int b;
    char opp[20];
    fgets(opp, 20, stdin);
    printf("This is a calculator \n5");

    printf("Enter your first number:");
    scanf("%d", &a);

    printf("Enter your second number:");
    scanf("%d", &b);

    printf("Enter operation(add, sub, mult, div, remainder):");
    fgets(opp, 20, stdin);

    if ((opp=="add")|(opp=="+"))
    {
        printf("%s", add(a,b));
    }
    else if ((opp=="sub")|(opp=="-"))
    {
        printf("%s", sub(a,b));
    }
    else if ((opp=="mult")|(opp=="*")|(opp=="x")|(opp=="X"))
    {
        printf("%s", mult(a,b));
    }
    else if ((opp=="div")|(opp=="/"))
    {
        printf("%s", div(a,b));
    }
    else if ((opp=="rem")|(opp=="remainder")|(opp=="%%"))
    {
        printf("%s", rem(a,b));
    }
    else{
        printf("Wrong opperator!");
    }
    
        
    
}