#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input from user
    printf("Enter operator (+, -, *, /, %%, ^, sqrt): ");
    scanf(" %c", &operator);

    // Handle square root separately as it's a unary operation
    if (operator == 'sqrt') {
        printf("Enter a number: ");
        scanf("%lf", &num1);

        // Check if the input is non-negative
        if (num1 >= 0) {
            result = sqrt(num1);
            printf("Result: sqrt(%.2lf) = %.2lf\n", num1, result);
        } else {
            printf("Error: Cannot calculate square root of a negative number.\n");
            return 1; // Exit with an error code
        }

        return 0;
    }

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check if the denominator is not zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1; // Exit with an error code
            }
            break;
        case '%':
            // Check if the divisor is not zero
            if (num2 != 0) {
                result = fmod(num1, num2);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
                return 1; // Exit with an error code
            }
            break;
        case '^':
            result = pow(num1, num2);
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1; // Exit with an error code
    }

    // Display the result
    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0;
}

