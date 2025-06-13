#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * Author: Sac1802
 */

/**
 * @brief Pointer-driven parser that relies on strtol().
 *
 * Flow:
 *  1. Walk the input with pointer @p p.
 *  2. Flip the @c isNegative flag whenever the keywords "plus"/"minus"
 *     are encountered.
 *  3. When a digit is found, strtol() reads the entire number; the running
 *     total is updated by addition or subtraction.
 *  4. Finally the total is written into a 12-byte buffer
 *     (fits a 32-bit signed int) and returned.
 *
 * @param s  Null-terminated expression string.
 * @return   Newly malloc’ed string containing the result, or NULL on OOM.
 */
char *second(char *s)
{
    long total = 0;
    bool isNegative = false;
    const char *p = s;

    while (*p)
    {
        if (strncmp(p, "plus", 4)  == 0) { isNegative = false; p += 4; continue; }
        if (strncmp(p, "minus", 5) == 0) { isNegative = true;  p += 5; continue; }

        if (!isdigit((unsigned char)*p)) { ++p; continue; }

        char *end;
        long value = strtol(p, &end, 10);
        total += isNegative ? -value : value;
        p = end;
    }

    char *result = malloc(12);
    if (!result) return NULL;
    snprintf(result, 12, "%ld", total);
    return result;
}

/**
 * @brief Original digit-by-digit parser (kept intact).
 *
 * Flow:
 *  1. Iterate through the string with index @c i.
 *  2. Build each operand digit-by-digit inside @c stringValue.
 *  3. When the run of digits ends, convert with atoi() and update @c value.
 *  4. Detect "plus"/"minus" via strncmp(), toggling @c isNegative.
 *  5. Convert @c value to text and return it.
 *
 * @param s  Null-terminated expression string.
 * @return   Newly malloc’ed string containing the result, or NULL on OOM.
 */
char *function(char *s)
{
    int len = strlen(s);
    char *p = malloc(len * 2 + 1);          /* generous buffer for result */
    if (!p) return NULL;

    char stringValue[12];
    int  index = 0;
    int  value = 0;
    bool isNegative = false;

    for (int i = 0; i < len; i++)
    {
        char value_char = s[i];

        if (value_char >= '0' && value_char <= '9')
        {
            stringValue[index++] = value_char;

            if (i + 1 == len || !(s[i + 1] >= '0' && s[i + 1] <= '9'))
            {
                stringValue[index] = '\0';
                int new_Value = atoi(stringValue);
                value += isNegative ? -new_Value : new_Value;
                index = 0;
                isNegative = false;
            }
            continue;
        }

        if (strncmp(&s[i], "minus", 5) == 0) { isNegative = true;  i += 4; }
        else
        if (strncmp(&s[i], "plus", 4)  == 0) { isNegative = false; i += 3; }
    }

    snprintf(p, sizeof(p), "%d", value);
    return p;
}

/**
 * @brief Demo driver: feeds the same expression to both parsers and prints
 *        their results.
 */
int main(void)
{
    char str[] =
        "4697minus34208minus14629plus56284plus50036minus49802minus40858";

    char *value1 = function(str);
    char *value2 = second(str);

    printf("function() result : %s\n", value1);
    printf("second()   result : %s\n", value2);

    free(value1);
    free(value2);
    return 0;
}