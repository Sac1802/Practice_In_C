#include <stdio.h>
#include <stdlib.h>
/**
 * Author: Sac1802
 */

/**
 * @brief Converts sum of two integers to binary string.
 * 
 * Returns a dynamically allocated string "0" if sum is zero.
 * Must free the returned string after use.
 * 
 * @param n First integer
 * @param n2 Second integer
 * @return char* Binary string (dynamically allocated), or NULL on malloc failure.
 */
char *convert_to_binary2(int n, int n2){
    unsigned long long index = (unsigned long long)n + (unsigned long long)n2;
    if (index == 0) {
        char *zero = malloc(2);
        zero[0] = '0';
        zero[1] = '\0';
        return zero;
    }

    char temp[64];
    int num = 0;
    while(index > 0){
        temp[num++] = (index % 2) + '0';
        index /= 2;
    }

    char *binary = malloc(num + 1);
    if(!binary) return NULL;
    for(int i = 0; i < num; i++){
        binary[i] = temp[num - i - 1];
    }
    binary[num] = '\0';
    return binary;
}

/**
 * @brief Converts sum of two integers to binary string.
 * 
 * Returns constant string "0" if sum is zero.
 * Caller must NOT free the string if it is "0".
 * 
 * @param n First integer
 * @param n2 Second integer
 * @return char* Binary string (dynamically allocated or constant).
 */
char *convert_to_binary(int n, int n2){
    unsigned long long index = (unsigned long long)n + (unsigned long long)n2;
    int num = 0;
    char temp[64];
    if(index == 0) return "0";
    while(index > 0){
        temp[num++] = (index % 2) + '0';
        index /= 2;
    }
    char *binary = malloc(num + 1);
    for (int i = 0; i < num; i++)
    {
        binary[i] = temp[num - i - 1];
    }
    binary[num] = '\0';
    return binary;
    
}

int main(){
    char* result = convert_to_binary(0, 0);
    printf("%s\n", result);
    char* result2 = convert_to_binary2(0, 0);
    printf("%s\n", result2);
    if (result != NULL && result[0] != '0') {
        free(result);
    }
    return 0;
}