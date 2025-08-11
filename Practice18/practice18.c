#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned decode_roman(const char *roman_number)
{
    int value = 0;
    char values[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int numbers[] = {1, 5, 10, 50, 100, 500, 1000};
    size_t length = sizeof(values) / sizeof(values[0]);
    size_t roman_length = strlen(roman_number);

    for (size_t i = 0; i < roman_length; i++)
    {
        char current = roman_number[i];
        int currentValue = 0;
        int nextValue = 0;
        for (size_t j = 0; j < length; j++)
        {
            if (current == values[j])
            {
                currentValue = numbers[j];
                break;
            }
        }
         if(i + 1 < roman_length)
        {
            char nextChar = roman_number[i + 1];
            for(size_t j = 0; j < length; j++)
            {
                if(nextChar == values[j])
                {
                    nextValue = numbers[j];
                    break;
                }
            }
        }
        if(currentValue < nextValue)
        {
            value -= currentValue;
        }else{
            value += currentValue;
        }
    }
    return value;
}


int main(void)
{
    const char *roman = "XIV";
    unsigned int decimal = decode_roman(roman);
    printf("The decimal value of %s is %u\n", roman, decimal);
    return 0;
}