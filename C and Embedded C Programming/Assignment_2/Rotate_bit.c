
#include <stdio.h>

int main()
{

    unsigned char x = 128;

    // Rotate left by 3 bits
    x = (x << 3) | (x >> (8 - 3));

    // Print the result after left rotation
    printf("After rotating left by 3 bits: %u\n", x);

    // Assign 128 to x
    x = 128;

    // Rotate right by 3 bits
    x = (x >> 3) | (x << (8 - 3));

    // Print the result after right rotation
    printf("After rotating right by 3 bits: %u\n", x);

    return 0;
}


