# Number of Trailing Zeros in Factorial

## Kata Overview

[Number of trailing zeros of N!](https://www.codewars.com/kata/52f787eb172a8b4ae1000a34)

This kata challenges you to determine the number of trailing zeros in the factorial of a given number $N$. A trailing zero is produced by multiplying 10, which is the product of 2 and 5. Since factors of 2 are more abundant than factors of 5 in factorials, the number of trailing zeros is determined by the number of times 5 is a factor in the numbers from 1 to $N$.

## Approach

To efficiently compute the number of trailing zeros without calculating the factorial directly (which is computationally impractical for large $N$), we use the following method:

1. **Count Multiples of 5**: Determine how many numbers up to $N$ are divisible by 5. This gives the initial count of factors of 5.
2. **Count Higher Powers of 5**: For each higher power of 5 (i.e., 25, 125, 625, etc.), count how many numbers up to $N$ are divisible by that power. Each of these contributes an additional factor of 5.
3. **Sum the Counts**: The total number of trailing zeros is the sum of all these counts.

This approach leverages the fact that higher powers of 5 contribute multiple factors of 5, and thus multiple trailing zeros.

## Solution

The solution involves iterating through the powers of 5 and summing the integer divisions of $N$ by these powers until the result is zero. This method is efficient and avoids the need to compute large factorials directly.

## Example

For $N = 12$:

* $\left\lfloor \frac{12}{5} \right\rfloor = 2$ (numbers divisible by 5: 5, 10)
* $\left\lfloor \frac{12}{25} \right\rfloor = 0$ (no numbers divisible by 25 up to 12)

Total trailing zeros = 2.

## Conclusion

This kata provides an excellent exercise in mathematical reasoning and algorithmic efficiency. By understanding the factors contributing to trailing zeros, we can devise an optimal solution without resorting to computationally expensive operations.

