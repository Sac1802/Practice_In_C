#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * @brief Represents a character and its frequency count.
 */
typedef struct Character_Count_Pair {
    char character;    /**< The character being counted */
    size_t count;      /**< Number of times the character appears */
} ccp;

/**
 * @brief Counts the number of occurrences of each character in a given string.
 *
 * This function scans the input string and builds a dynamically allocated array
 * of `ccp` structures (character-count pairs). The output preserves the order
 * of first appearance of each character. Duplicate characters are skipped after
 * processing to ensure each is counted only once.
 *
 * @param strin The input string to analyze.
 * @param szout Pointer to a size_t variable where the number of unique characters will be stored.
 * @return A dynamically allocated array of `ccp` structs containing the character and count.
 *         Returns NULL and sets *szout to 0 if the input string is empty.
 *         The caller is responsible for freeing the returned array.
 */
ccp* order_count(const char *strin, size_t *szout) {
    size_t len = strlen(strin);
    char *copy_strin = malloc(len + 1);
    ccp *list_values = malloc(len * sizeof(ccp));

    // Handle empty input string
    if (len == 0) {
        *szout = 0;
        free(copy_strin);
        free(list_values);
        return NULL;
    }

    // Make a mutable copy of the input string
    strcpy(copy_strin, strin);
    size_t index = 0;

    // Iterate over each character in the copy
    for (size_t i = 0; i < len; i++) {
        char value_compare = copy_strin[i];
        size_t counter_character = 0;
        ccp value_final;

        // Skip already processed characters
        if (value_compare == '\0') continue;

        // Count occurrences and mark as processed
        for (size_t j = 0; j < len; j++) {
            if (value_compare == copy_strin[j]) {
                counter_character++;
                copy_strin[j] = '\0';
            }
        }

        // Store the result in the list
        value_final.character = value_compare;
        value_final.count = counter_character;
        list_values[index++] = value_final;
    }

    *szout = index; // Set output size
    free(copy_strin); // Free temporary copy
    return list_values;
}

/**
 * @brief Entry point for testing the order_count function.
 *
 * Demonstrates the character counting process using a fixed string.
 * The results are printed to the standard output.
 *
 * @return int Exit code (0 = success)
 */
int main() {
    const char *text = "hello world!";
    size_t count = 0;

    ccp *result = order_count(text, &count);

    if (result == NULL || count == 0) {
        printf("No characters to count.\n");
    } else {
        printf("Character counts in \"%s\":\n", text);
        for (size_t i = 0; i < count; i++) {
            printf("'%c': %zu\n", result[i].character, result[i].count);
        }
        free(result); // Free allocated memory
    }

    return 0;
}