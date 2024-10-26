#include <cstdio>  // Include standard I/O library for printf and scanf_s

int main() {
    char operation;  // Variable to store the operator (+, -, *, /)
    double num1, num2, result;  // Variables to store the numbers and result

    // Prompt the user for input
    printf("Simple Calculator\n");  // Display the calculator title
    printf("Enter first number: ");
    scanf_s("%lf", &num1);  // Read the first number from the user

    printf("Enter an operator (+, -, *, /): ");
    scanf_s(" %c", &operation);  // Read the operation (+, -, *, or /)

    printf("Enter second number: ");
    scanf_s("%lf", &num2);  // Read the second number from the user

    // Perform the calculation based on the operation
    if (operation == '+') {
        result = num1 + num2;  // Add the two numbers
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);  // Display the result
    }
    else if (operation == '-') {
        result = num1 - num2;  // Subtract the second number from the first
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);  // Display the result
    }
    else if (operation == '*') {
        result = num1 * num2;  // Multiply the two numbers
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);  // Display the result
    }
    else if (operation == '/') {
        // Check for division by zero
        if (num2 != 0) {
            result = num1 / num2;  // Divide the first number by the second
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);  // Display the result
        }
        else {
            printf("Error: Division by zero is not allowed.\n");  // Error message for division by zero
        }
    }
    else {
        printf("Error: Invalid operator. Please use +, -, *, or /.\n");  // Error message for invalid operator
    }

    return 0;  // Return success
}
