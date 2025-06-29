#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum fingers {PINKIE, RING, MIDDLE, INDEX, THUMB};

size_t get_fingers(const char *binary, enum fingers digits[5]) {
    size_t index = 0;
    size_t len = strlen(binary);

    for (size_t i = 0; i < len; i++) {
        if (binary[i] == '1') {
            enum fingers value = i;
            if (value >= PINKIE && value <= THUMB)
                digits[index++] = value;
        }
    }
    return index;
}


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
