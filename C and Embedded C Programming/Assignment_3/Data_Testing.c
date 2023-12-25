#include <stdio.h>

int main()
{
    int divisor;

    // Input from user
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Check if the divisor is not zero
    if (divisor == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 1; // Exit with an error code
    }

    printf("Numbers between 1 and 100 divisible by %d with remainder 5:\n", divisor);

    // Loop through numbers from 1 to 100
    for (int i = 1; i <= 100; ++i)
    {
        // Check if the number is divisible by the specified divisor with remainder 5
        if (i % divisor == 5)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
