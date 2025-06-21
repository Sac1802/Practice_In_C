#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Author: Sac1802
 * Date: 2025-06-20
 * 
 * Description:
 * This program defines a function that removes all exclamation marks from 
 * a given string. The cleaned result is stored in a separate output buffer.
 */

/**
 * @brief Removes all exclamation marks from the input string.
 *
 * @param str_in  Input string to process.
 * @param str_out Output buffer to store the cleaned string (without '!').
 */
void remove_exclamation_marks(const char *str_in, char *str_out) {
    int index = 0;
    size_t length = strlen(str_in);
    for (int i = 0; i < length; i++) { 
        if (str_in[i] != '!') {
            str_out[index++] = str_in[i];
        }
    } 
    str_out[index] = '\0';
}

/**
 * @brief Demonstrates the usage of remove_exclamation_marks function.
 */
int main() {
    char str_in[] = "Hello! How are you doing today?!";
    char str_out[sizeof(str_in)];
    remove_exclamation_marks(str_in, str_out);
    printf("Output string: %s\n", str_out);
}
