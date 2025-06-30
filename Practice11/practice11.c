#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Enum representing the five fingers of a hand.
 *        Order: Pinkie, Ring, Middle, Index, Thumb.
 */
enum fingers {PINKIE, RING, MIDDLE, INDEX, THUMB};

/**
 * @brief Extracts the fingers that are active (raised) from a binary string.
 *
 * @param binary A binary string representing the finger states.
 * @param digits Output array to store the corresponding active fingers.
 * @return Number of active fingers found in the binary string.
 */
size_t get_fingers(const char *binary, enum fingers digits[5]) {
    size_t index = 0;
    size_t len = strlen(binary);

    size_t shift = 5 - len;
    for (size_t i = 0; i < len; i++) {
        if (binary[i] == '1') {
            enum fingers value = i + shift;
            if (value >= PINKIE && value <= THUMB)
                digits[index++] = value;
        }
    }

    return index;
}


/**
 * @brief Entry point to test the finger detection from a binary string.
 *
 * Demonstrates mapping of binary input to finger names.
 */
int main() {
    enum fingers digits[5];
    size_t len = get_fingers("101", digits);

    const char *finger_names[] = {"Pinkie", "Ring", "Middle", "Index", "Thumb"};

    for (size_t i = 0; i < len; i++) {
        printf("%s ", finger_names[digits[i]]);
    }

    printf("\n");
    return 0;
}
