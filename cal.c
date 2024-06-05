#include <stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter a operator (+ - * / ): ");
    scanf("%c",&operator);

    printf("Enter Num 1: ");
    scanf("%lf",&num1);

    printf("Enter num 2 : ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("Result: %lf",result);
            break;
        case '-':
        result = num1 - num2;
        printf("Result: %lf",result);
        break;
        case '/':
        result = num1 / num2;
        printf("Result: %lf",result);
        break;
        case '*':
        result = num1 * num2;
        printf("Result: %lf",result);

        default:
            printf("Invalid Operator");
    }

    return 0;
}