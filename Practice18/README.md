# Roman Numerals Decoder in C

This repository contains a solution to the [Roman Numerals Decoder](https://www.codewars.com/kata/51b6249c4612257ac0000005/c) kata from Codewars, implemented in C.

## Kata Description

The challenge is to create a function that receives a Roman numeral as input and returns its value as an integer. Validation of the Roman numeral format is not required. Modern Roman numerals are written by expressing each decimal digit separately, starting from the leftmost digit and omitting any zeros.

### Examples:

* "XXIX" → 29
* "MCMXC" → 1990
* "MMVIII" → 2008
* "MDCLXVI" → 1666

### Symbols and their values:

| Symbol | Value |
| ------ | ----- |
| I      | 1     |
| V      | 5     |
| X      | 10    |
| L      | 50    |
| C      | 100   |
| D      | 500   |
| M      | 1000  |

## Solution Approach

The solution iterates through the input string symbol by symbol, mapping each Roman character to its numeric value. It sums the values but subtracts when a symbol of smaller value precedes one of a larger value, adhering to Roman numeral rules. This approach ensures correct decoding of numerals like `IV` (4) or `IX` (9).

## How to Run

To compile and run the program:

1. Save the code in a file named `roman_decoder.c`.

2. Open a terminal and navigate to the directory containing the file.

3. Compile the code using:

   ```bash
   gcc -o roman_decoder practice18.c
   ```

4. Run the program:

   ```bash
   ./roman_decoder
   ```

   The output will be the decimal value corresponding to the input Roman numeral.

