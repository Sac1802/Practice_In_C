#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Removes exactly 'k' characters from the given lowercase string 's'
 * by removing letters in alphabetical order starting from 'a',
 * and always removing the leftmost matching character first.
 * 
 * @param s The input string (lowercase letters only).
 * @param k The number of characters to remove.
 * @return A new string with exactly 'k' characters removed.
 */
char *solve(const char *s, unsigned k){
    int len = strlen(s), index = 0, number = k;
    char *result = malloc(len + 1);  // Allocate memory for the result

    // Copy original string into result
    for(int i = 0; i < len; i++) {
        result[i] = s[i];
    }
    result[len] = '\0'; // Null-terminate the copied string

    // Remove characters until k is 0 or all letters (a-z) are checked
    while(number > 0 && index < 26) {
        for(int i = 0; i < len && number > 0; i++){
            if(result[i] == 'a' + index) {
                // Shift the rest of the string left to remove character at i
                for(int j = i; j < len; j++){
                    result[j] = result[j + 1];
                }
                len--;     // String length decreases
                number--;  // One less character to remove
                i--;       // Stay at current index to recheck new character
            } 
        }
        index++;  // Move to next letter ('a' + index)
    }
    
    return result;
}

/**
 * Example usage and test for the solve function.
 */
int main() {
    const char *s = "abracadabra";
    unsigned k = 2;
    char *result = solve(s, k);
    
    printf("%s\n", result);  // Expected output: "brcadabra"
    
    free(result);  // Free allocated memory
    return 0;
}
