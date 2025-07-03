#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


/**
 * @brief Checks if two unsigned long long integers are interlockable using bitwise AND.
 * 
 * Two numbers are interlockable if they do not share any '1' bits in the same position.
 * This function uses a direct bitwise operation for an optimal check.
 * 
 * @param a First non-negative integer.
 * @param b Second non-negative integer.
 * @return true if the numbers are interlockable, false otherwise.
 */
bool interlockable2(unsigned long long a, unsigned long long b){
    return !(a & b);
}

/**
 * @brief Checks if two unsigned long long integers are interlockable by manually 
 * converting each to binary arrays and comparing bits.
 * 
 * This function converts both numbers into binary stored in arrays, compares only
 * bits up to the length of the smaller number, and checks if any overlapping '1's exist.
 * 
 * @param a First non-negative integer.
 * @param b Second non-negative integer.
 * @return true if the numbers are interlockable, false otherwise.
 */
bool interlockable(unsigned long long a, unsigned long long b) {
    unsigned char binary1[64] = {0}, binary2[64] = {0};
    int len = 0, len1 = 0, len2 = 0;
    bool final_response = true;
    while(a != 0){
        binary1[len1++] = a % 2;
        a /= 2;
    }
    while(b != 0){
        binary2[len2++] = b % 2;
        b /= 2;
    }
    len = len1 < len2? len1 : len2;

    for(int i = 0; i < len; i++){
        if(binary1[i] & binary2[i]){
            final_response = false;
            break;
        }
    }
    return final_response;
}

/**
 * @brief Main function to demonstrate and test the interlockable functions.
 * 
 * Tests a few sample pairs of unsigned long long integers and prints the result
 * of both implementations to the console.
 * 
 * @return int Exit status code.
 */
int main() {
    unsigned long long a, b;

    a = 9; b = 4;
    printf("a = %llu, b = %llu\n", a, b);
    printf("interlockable : %s\n", interlockable(a, b) ? "true" : "false");
    printf("interlockable2: %s\n\n", interlockable2(a, b) ? "true" : "false");

    a = 0; b = 0;
    printf("a = %llu, b = %llu\n", a, b);
    printf("interlockable : %s\n", interlockable(a, b) ? "true" : "false");
    printf("interlockable2: %s\n\n", interlockable2(a, b) ? "true" : "false");

    a = 255; b = 255;
    printf("a = %llu, b = %llu\n", a, b);
    printf("interlockable : %s\n", interlockable(a, b) ? "true" : "false");
    printf("interlockable2: %s\n\n", interlockable2(a, b) ? "true" : "false");

    return 0;
}