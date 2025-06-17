#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

/**
 * @file practice4.c
 * @author Sac1802
 * @brief Determines if a given numeric value should be considered plural.
 */

/**
 * @brief Evaluates whether a given numeric value represents a plural quantity.
 *
 * In English, plural applies to all numbers except exactly 1.
 * This function returns true when the input is 0 or greater than 1.
 *
 * @param value A non-negative number (size_t) to evaluate.
 * @return true If value is 0 or greater than 1.
 * @return false If value is exactly 1.
 */

bool plural(size_t value) {
    return value > 1 || value == 0 ? true : false;
}

/**
 * @brief Entry point of the program. Tests the plural function with a sample input.
 *
 * Prints whether the given number should be considered plural or not.
 */
int main(){
    size_t value = 0;
    bool result = plural(value);
    printf("Plurality of %zu: %d\n", value, result);
    return 0;
}
