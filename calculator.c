#include<stdio.h>
int main()
{
    float num1, num2, result;
    char operator;

    printf("\n Enter first number : ");
    scanf("%f", &num1);
    
    printf("\n Enter second number : ");
    scanf("%f", &num2);
    
    printf("\n Enter an operator ( + , - , * , / ) : ");
    printf("SUM: + , DIFFERENCE: - , MULTIPLICATION: * , DIVISION: / ");
    scanf("%c", &operator );

    switch (operator) {
        case '+' :
        result = num1 + num2 ;
        printf("\n Result = %.2f", result);

        case '-' :
        result = num1 - num2 ;
        printf("\n Result = %.2f", result);

        case '*' :
        result = num1 * num2 ;
        printf("\n Result = %.2f");

        case '/' :
        if (num2 !=0 ) {
            result = num1/num2 ;
            printf("\n Result = %.2f", result);
        }
        else {
            printf("\n ERROR! Division not possible ");
        }
        break;
        default:
        printf("\n Invalid operator");
    }
    return 0;
}