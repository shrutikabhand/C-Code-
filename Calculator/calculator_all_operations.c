#include <stdio.h>
#include <math.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int choice;
    float num1, num2;
    int a, b;

    printf("\n MENU DRIVEN CALCULATOR: \n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. Modulus (Integers only) \n");
    printf("6. Square Root \n");
    printf("7. Power (Exponentiation) \n");
    printf("8. Factorial \n");
    printf("9. Sine \n");
    printf("10. Cosine \n");
    printf("11. Tangent \n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n");

    switch(choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result = %.2f", num1 + num2);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result = %.2f", num1 - num2);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf("Result = %.2f", num1 * num2);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            if(num2 != 0)
                printf("Result = %.2f", num1 / num2);
            else
                printf("Error! Division by zero.");
            break;

        case 5:
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);
            printf("Result = %d", a % b);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%f", &num1);
            printf("Square Root = %.2f", sqrt(num1));
            break;

        case 7:
            printf("Enter base and exponent: ");
            scanf("%f %f", &num1, &num2);
            printf("Result = %.2f", pow(num1, num2));
            break;

        case 8:
            printf("Enter an integer: ");
            scanf("%d", &a);
            if(a >= 0)
                printf("Factorial = %d", factorial(a));
            else
                printf("Factorial of negative number not defined.");
            break;

        case 9:
            printf("Enter angle in degrees: ");
            scanf("%f", &num1);
            printf("sin(%.2f) = %.2f", num1, sin(num1 * 3.14159 / 180));
            break;

        case 10:
            printf("Enter angle in degrees: ");
            scanf("%f", &num1);
            printf("cos(%.2f) = %.2f", num1, cos(num1 * 3.14159 / 180));
            break;

        case 11:
            printf("Enter angle in degrees: ");
            scanf("%f", &num1);
            printf("tan(%.2f) = %.2f", num1, tan(num1 * 3.14159 / 180));
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}
