#include <stdio.h>

int main() {
    unsigned char x = 1;

    // Set bit number 7
    x |= (1 << 7);

    // Clear bit number 6
    x &= ~(1 << 6);

    // Read bit number 7
    unsigned char bit7 = (x >> 7) & 1;

    // Print the result
    printf("After setting bit 7 and clearing bit 6, x is now: %u\n", x);
    printf("Bit 7 is: %u\n", bit7);

    return 0;
}
