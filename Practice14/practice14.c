#include <stdlib.h>
#include <stdio.h>

/**
 * @brief Correct implementation of the modulus operator (%) using basic arithmetic.
 *
 * This function calculates the remainder of a division between two unsigned integers
 * without using the '%' operator or any forbidden math functions.
 *
 * The logic follows this mathematical formula:
 *     remainder = dividend - (dividend / divisor) * divisor
 *
 * This is equivalent to the behavior of the modulus operator (%) when both
 * dividend and divisor are non-negative.
 *
 * @param dividend The number to be divided (must be >= divisor).
 * @param divisor The number by which to divide.
 * @return The remainder of the division (same result as dividend % divisor).
 */
unsigned modlulo(unsigned dividend, unsigned divisor) {
    return dividend - (dividend / divisor) * divisor;
}

/**
 * @brief Alternative remainder implementation using integer division and subtraction.
 *
 * This function is logically equivalent to `modlulo()`, but splits the operation
 * into separate steps for clarity and readability. It does not use the modulus operator,
 * nor any forbidden math functions.
 *
 * It performs:
 *     1. Integer division to get the quotient (truncated).
 *     2. Multiplies the quotient by the divisor.
 *     3. Subtracts the product from the dividend to get the remainder.
 *
 * @param dividend The number to be divided (must be >= divisor).
 * @param divisor The number by which to divide.
 * @return The remainder of the division (same as dividend % divisor).
 */
unsigned modlulo2(unsigned dividend, unsigned divisor){
    unsigned quotient = dividend / divisor;
    unsigned product = quotient * divisor;
    unsigned remainder = dividend - product;
    return remainder;
}

int main() {
    unsigned result1 = modlulo(34, 7);
    unsigned result2 = modlulo2(34, 7);
    
    printf("%u\n", result1);
    printf("%u\n", result2);
    
    return 0;
}
