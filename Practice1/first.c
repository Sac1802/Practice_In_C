#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * Author: Sac1802
 */

/**
 * * @brief This function takes a string and replaces 
 * each lowercase letter with its position in the alphabet.
 * * @param str The input string to be processed.
 */
void first_option(char *str){
    int leng = strlen(str);
    char *p = malloc(leng * 3 + 1);
    int pos = 0;
    for (size_t i = 0; i < leng; i++)
    {
        int postion = 0;
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            postion = str[i] - 'a' + 1;
            pos += sprintf(&p[pos], "%d", postion); 
        }else{
            p[pos++] = str[i];
        }
        
    }
    p[pos] = '\0';
    printf("The value is: %s\n", p);
    free(p);
}

/**
 * * @brief This function takes a string and replaces 
 * each lowercase letter with its position in the alphabet.
 * * @param str The input string to be processed.
 */
void second_option(char *str){
    char words[] = "abcdefghijklmnopqrstuvwxyz";
    int leng = strlen(str);
    char *p = malloc(leng * 2 + 1);
    int pos = 0;

    for (size_t i = 0; i < leng; i++) {
        int found = 0;
        for (size_t j = 0; j < 26; j++) {
            if (str[i] == words[j]) {
                found = 1;
                pos += snprintf(&p[pos], leng * 2 + 1 - pos, "%zu", j + 1);
                break;
            }
        }
        if (!found) {
            p[pos++] = str[i];
        }
    }
    p[pos] = '\0';
    printf("The second value is: %s\n", p);
    free(p);
}

int main(){
    char str[] = "AbcdT$#@";
    char *values = str;
    for (size_t i = 0; i < strlen(values); i++)
    {
        values[i] = tolower(values[i]);
    }
    
    printf("The string is: %p\n", values);
    first_option(values);
    second_option(values);
    return 0;
}