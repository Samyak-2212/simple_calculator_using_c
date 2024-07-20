#include <stdio.h>
#include<string.h>
#include<windows.h>
float add(float a, float b){
    return a+b;
}
float sub(float a, float b){
    return a-b;
}
float mult(float a, float b){
    return a*b;
}
float divs(float a, float b){
    return a/b;
}
float rem(int a, int b){
    return a%b;
}

float main(){
    float a;
    float b;
    char opp[20];
    
    printf("This is a calculator \n");

    printf("Enter your first number:");
    scanf("%f", &a);

    printf("Enter your second number:");
    scanf("%f", &b);

    printf("Enter operation(add, sub, mult, div, remainder):");
    scanf("%s", &opp);


    if ((strcmp(opp, "add") == 0)||(strcmp(opp, "+") == 0)||(strcmp(opp, "adiition") == 0))
    {
        printf("%f", add(a,b));
    }
    else if ((strcmp(opp, "sub") == 0)||(strcmp(opp, "-") == 0)||(strcmp(opp, "subtract") == 0))
    {
        printf("%f", sub(a,b));
    }
    else if ((strcmp(opp, "mult") == 0)||(strcmp(opp, "*") == 0)||(strcmp(opp, "x") == 0))
    {
        printf("%f", mult(a,b));
    }
    else if ((strcmp(opp, "div") == 0)||(strcmp(opp, "divide") == 0)||(strcmp(opp, "/") == 0))
    {
        printf("%f", divs(a,b));
    }
    else if ((strcmp(opp, "rem") == 0)||(strcmp(opp, "remainder") == 0)||(strcmp(opp, "%") == 0))
    {
        printf("%d", rem((int)a,b));
    }
    else{
        printf("Wrong opperator!");
    }   
    Sleep(5000);
    return 0;
}