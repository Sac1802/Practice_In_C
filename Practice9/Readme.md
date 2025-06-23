# 🌟 eq_sum_pow_dig – Codewars Kata

This app solves the ["Sum of Digits Raised to Powers"](https://www.codewars.com/kata/560a4962c0cc5c2a16000068/c) challenge, which consists of identifying all numbers less than or equal to a limit `h_max` that can be reconstructed by adding their own digits raised to a fixed power `expo`.

## 🧠 Problem Description

For a given number `n`:

- Separate its digits
- Raise each digit to a power `expo`
- Add these values ​​together

If the resulting sum equals `n`, then that number is considered valid.

**Example:**

```
153 → 1³ + 5³ + 3³ = 1 + 125 + 27 = 153 ✅
```

## 🛠️ Implementation

The main function is:

```c
unsigned *eq_sum_pow_dig(unsigned h_max, unsigned expo, unsigned *results, size_t *length);
```

### Parameters:

- `h_max`: Upper bound (inclusive) to consider.
- `expo`: Exponent to which the digits will be raised.
- `results`: Provided array where valid values ​​will be stored.
- `length`: Pointer to a variable where the number of results found will be stored.

### Expected Behavior:

1. Iterate from 2 to `h_max`.
2. For each number:
- Extract its digits.
- Raise each digit to `expo` and accumulate.
- If the sum matches the number, it is stored.
3. Return the array filled with valid values.
4. Allocates no memory — uses the provided array.

## 💻 Usage Example

```c
unsigned result[100];
size_t length = 0;

eq_sum_pow_dig(10000, 4, result, &length);

// Print the results
for (size_t i = 0; i < length; i++) {
printf("%u\n", result[i]);
}
```

### Expected Output:

```
1634
8208
9474
```

## 🧪 Compilation

If you are compiling manually from the terminal, remember to link with the math library:

```bash
gcc main.c -o main -lm
```

## 🚀 Final Notes

This exercise is an excellent opportunity to practice:

- Digit manipulation in C
- Pointers and arrays
- Using standard libraries (`math.h`)
- Mathematical logic and number pattern validation

---