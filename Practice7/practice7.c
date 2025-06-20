#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * Author: Sac1802
 * Date: 2023-10-30
 * Description: This program implements the neutralize function that compares two strings character by character.
 * If characters at the same position are equal, the character is kept in the result.
 * If they are different, '0' is placed in the result.
 * The result is stored in a third string.
 */

/**
 * @brief two strings by comparing them character by character.
 * If characters at the same position are equal, the character is kept in the result.
 * If they are different, '0' is placed in the result.
 *
 * @param s1 First input string.
 * @param s2 Second input string.
 * @param s3 Output string where the result will be stored.
 */
void neutralize(const char *s1, const char *s2, char *s3) {
    for (int i = 0; i < strlen(s1); i++)
    {
        
        (s1[i] == s2[i]) ? (s3[i] = s1[i]) : (s3[i] = '0');
    }
    s3[strlen(s1)] = '\0';
}

int main(){
    char s1[] = "";
    char s2[] = "";
    char s3[sizeof(s1)];
    neutralize(s1, s2, s3);
    printf("Neutralized string: %s\n", s3);
    return 0;
}