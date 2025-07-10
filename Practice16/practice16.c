#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Finds the length of the longest prefix which is also a suffix
 *        in the given string, without overlapping.
 *
 * @param string A pointer to a null-terminated lowercase string.
 * @return The length of the longest non-overlapping prefix that matches the suffix.
 */
unsigned prefix_length(const char *string)
{
    int half = strlen(string) / 2;
    size_t len_string = strlen(string);
    for(size_t i = half; i > 0; i--){
        /**
         * Compare:
         * - The prefix starting at position 0: string[0..i-1]
         * - The suffix ending at the end of the string: string[len_string - i .. len_string - 1]
         * If they are equal, return the length i
         */
        if(strncmp(string, string + len_string - i, i) == 0){
            return i;
        }
    }
    return 0;
}

/**
 * @brief Main function for manual testing.
 */
int main()
{
    const char *string = "abcdabcc";
    unsigned result = prefix_length(string);
    printf("The length of the prefix is: %u\n", result);
    return 0;
}


