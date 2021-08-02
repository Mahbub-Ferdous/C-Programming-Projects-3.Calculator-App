#include<stdio.h>

int main(){
    double num1;
    double num2;
    int num3;
    int num4;
    char operation;
    double result;
    printf("\n\n\n************************** My Calculator App **************************\n\n");
    printf("You Can Doing Addition, Subtraction, Multipication, Dividation, Modulus Here:\n");

    printf("Enter Your First Operand: ");
    scanf("%lf", &num1);

    printf("Enter Your Operator: ");
    scanf("%s", &operation);

    printf("Enter Your Next Operand: ");
    scanf("%lf", &num2);

    switch(operation){
        case '+':
        result = num1 + num2;
        printf("The Result is: %.2lf", result);
        break;
        case '-':
        result = num1 - num2;
        printf("The Result is: %.2lf", result);
        break;
        case '*':
        result = num1 * num2;
        printf("The Result is: %.2lf", result);
        break;
        case '/':
        result = num1 / num2;
        printf("The Result is: %.2lf", result);
        break;
        case '%':
        result = num3 % num4;
        printf("The Result is: %d", result);
        break;
        default:
        printf("Error");


    }
    return 0;
}
