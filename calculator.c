// Create a basic calculator that can perform addition, subtraction, multiplication, and division.

#include <stdio.h>

int main() {
    // variables to store the two numbers entered by the user
    double num1, num2;
    // variable to store the operation to be performed
    char operation;

    // prompt the user to enter the first number
    printf("Enter first number: ");
    scanf("%lf", &num1);

    // prompt the user to enter the second number
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // prompt the user to enter the operation to be performed
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);  // the space before %c is to prevent trailing whitespace from being considered as part of the operation character

    // perform the calculation based on the operation entered by the user
    switch(operation) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Cannot divide by zero\n");
            } else {
                printf("%.1lf / %.1lf = %.1lf\n", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    // to indicate success
    return 0;
}

