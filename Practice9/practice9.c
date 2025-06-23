#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <math.h>

/**
 * Author: Sac180
 * Date: 2025-06-22
 * 
 * Description:
 * This program defines a function that finds all positive integers less than or equal 
 * to a given value (`h_max`) that are equal to the sum of their digits each raised to 
 * a specified power (`expo`). These numbers are stored in a results array.
 */

/**
 * @brief Finds numbers equal to the sum of their digits raised to a given power.
 *
 * For example, 1634 = 1⁴ + 6⁴ + 3⁴ + 4⁴
 *
 * @param h_max   Upper limit (inclusive) for checking numbers.
 * @param expo    Exponent to raise each digit to.
 * @param results Output array to store matching numbers.
 * @param length  Pointer to a variable holding the current length of results. It gets updated.
 * @return        Pointer to the results array (optional, useful for chaining or testing).
 */
unsigned *eq_sum_powdig(unsigned h_max, unsigned expo, unsigned *results, size_t *length) {
    int sum = 0;

    for (int i = 2; i <= (int)h_max; i++) {
        int n = i;

        // Calculate the sum of digits each raised to 'expo'
        while (n > 0) {
            //Here we get the last value of i
            int digit = n % 10;
            sum += pow(digit, expo);
            // Dividing by 10 removes the last digit (decimal base).
            n /= 10;
        }

        // If the sum equals the original number, store it
        if (sum == i) {
            results[*length] = i;
            (*length)++;
        }

        sum = 0;
    }

    return results;
}

/**
 * @brief Demonstrates the use of eq_sum_powdig with h_max = 10000 and expo = 4.
 */
int main() {
    unsigned h_max = 10000;
    unsigned expo = 4;
    unsigned result[100];
    size_t length = 0;

    eq_sum_powdig(h_max, expo, result, &length);

    printf("Numbers matching the property for h_max = %u and expo = %u:\n", h_max, expo);
    for (size_t i = 0; i < length; i++) {
        printf("%u\n", result[i]);
    }

    return 0;
}
