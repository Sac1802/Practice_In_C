#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>

bool comp(const int a[/*n*/], const int b[/*n*/], size_t n)
{
    int count = 0;
    int *tempArray = memcpy(malloc(n * sizeof(int)), a, n * sizeof(int));
    int *tempArrayB = memcpy(malloc(n * sizeof(int)), b, n * sizeof(int));
    if(!tempArray || !tempArrayB) {
        free(tempArray);
        free(tempArrayB);
        return false;
    }
    for(size_t  i = 0; i < n;  i++){
        int squared = tempArray[i] * tempArray[i];
        for(size_t j = 0; j < n; j++){
            if(squared == tempArrayB[j]){
                count++;
                tempArray[i] = -1;
                tempArrayB[j] = -1;
                break;
            }
        }
    }
    if(count == n){
        free(tempArrayB);
        free(tempArray);
        return true;
    }
    free(tempArrayB);
    free(tempArray);
    return false;
}

int main(void) {
    // Valid case
    int a1[] = {11, 121, 144, 19, 19, 144, 161, 19};
    int b1[] = {121, 14641, 20736, 361, 25921, 361, 20736, 361};
    size_t n1 = sizeof(a1) / sizeof a1[0];
    printf("Test 1 (valid): %s\n", comp(a1, b1, n1) ? "true" : "false");

    // Invalid case (wrong number)
    int a2[] = {11, 121, 144, 19, 19, 144, 161, 19};
    int b2[] = {132, 14641, 20736, 361, 25921, 361, 20736, 361};
    size_t n2 = sizeof(a2) / sizeof a2[0];
    printf("Test 2 (wrong number): %s\n", comp(a2, b2, n2) ? "true" : "false");

    // Invalid case (wrong frequency)
    int a3[] = {2, 2, 3};
    int b3[] = {4, 9, 9};
    size_t n3 = sizeof(a3) / sizeof a3[0];
    printf("Test 3 (wrong frequency): %s\n", comp(a3, b3, n3) ? "true" : "false");

    // Other example (order doesn't matter)
    int a4[] = {-2, -3, -4};
    int b4[] = {4, 9, 16};
    size_t n4 = sizeof(a4) / sizeof a4[0];
    printf("Test 4 (negative numbers): %s\n", comp(a4, b4, n4) ? "true" : "false");

    return 0;
}