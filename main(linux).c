#include <stdio.h>
#include<string.h>
#include<unistd.h>
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mult(int a, int b){
    return a*b;
}
int divs(int a, int b){
    return a/b;
}
int rem(int a, int b){
    return a%b;
}

int main(){
    int a;
    int b;
    char opp[20];
    
    printf("This is a calculator \n");

    printf("Enter your first number:");
    scanf("%d", &a);

    printf("Enter your second number:");
    scanf("%d", &b);

    printf("Enter operation(add, sub, mult, div, remainder):");
    scanf("%s", &opp);


    if ((strcmp(opp, "add") == 0)||(strcmp(opp, "+") == 0)||(strcmp(opp, "adiition") == 0))
    {
        printf("%d", add(a,b));
    }
    else if ((strcmp(opp, "sub") == 0)||(strcmp(opp, "-") == 0)||(strcmp(opp, "subtract") == 0))
    {
        printf("%d", sub(a,b));
    }
    else if ((strcmp(opp, "mult") == 0)||(strcmp(opp, "*") == 0)||(strcmp(opp, "x") == 0)||(strcmp(opp, "mul") == 0))
    {
        printf("%d", mult(a,b));
    }
    else if ((strcmp(opp, "div") == 0)||(strcmp(opp, "divide") == 0)||(strcmp(opp, "/") == 0))
    {
        printf("%d", divs(a,b));
    }
    else if ((strcmp(opp, "rem") == 0)||(strcmp(opp, "remainder") == 0)||(strcmp(opp, "%") == 0))
    {
        printf("%d", rem(a,b));
    }
    else{
        printf("Wrong opperator!");
    }   
    sleep(5);
    return 0;
}