#include <stdlib.h>
#include <stdio.h>
/**
 * Author: Sac1802
 */

/**
 * @brief Finds all occurrences of a number in an integer array.
 *
 * This function searches through the input array and returns a dynamically
 * allocated array containing the indices where the target number appears.
 * It also outputs the count of occurrences via the pointer `z`.
 *
 * @param a      The length of the input array.
 * @param array  The input array of integers.
 * @param number The target number to find.
 * @param z      Pointer to size_t where the count of found occurrences will be stored.
 *
 * @return A pointer to a dynamically allocated array of indices.
 *         Caller is responsible for freeing this memory.
 */
size_t *find_all(size_t a, const int array[a], int number, size_t *z) {
    size_t *values_final = malloc(a * sizeof(size_t));
    int index = 0;
    for (size_t i = 0; i < a; i++)
    {
        if(number == array[i]) values_final[index++] = i;
    }
    *z = index;
    return values_final;
}

/**
 * @brief Demonstrates the usage of the find_all function.
 *
 * Initializes a test array and searches for a given number,
 * then prints all indices where the number is found.
 *
 * @return Returns 0 on successful execution.
 */
int main(){
    int data[] = {6, 9, 3, 4, 3, 82, 11};
    size_t length = sizeof(data) / sizeof(data[0]);
    int number = 3;
    size_t z;
    size_t *find = find_all(length, data, number, &z);

    printf("Found %d at indices: ", number);
    for (size_t i = 0; i < z; i++) {
        printf("%zu ", find[i]);
    }
    printf("\n");

    free(find);  // Free the allocated memory

    return 0;
}
