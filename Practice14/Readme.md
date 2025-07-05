# 🔢 Remainder Without Using `%` Operator

This repository contains the solution to the [Remainder Without Modulus](https://www.codewars.com/kata/564f458b4d75e24fc9000041/c) kata from Codewars, written in C.

## 🧠 Kata Description

### Task

Write a method `remainder` which takes two integer arguments, `dividend` and `divisor`, and returns the remainder when `dividend` is divided by `divisor`.

> ⚠️ Do **NOT** use the modulus operator `%` to calculate the remainder!

### Assumptions

- The `dividend` will always be **greater than or equal to** the `divisor`.
- Your implementation must behave **exactly** like the `%` operator would.
- For example:
  ```c
  remainder(7, 5)  -> 2
  remainder(15, 4) -> 3
  remainder(25, 5) -> 0
  ```

### Note (C language)

* Functions such as `div()`, `remainder()`, `remquo()`, `fmod()` and similar are **disabled**.
* The goal is to compute the remainder **manually**, using only basic arithmetic operations.

---

## 💡 Solution Overview

The logic is based on the mathematical definition of modulus:

```
remainder = dividend - (dividend / divisor) * divisor
```

Where:

* `/` performs integer division (truncating toward zero).
* `*` and `-` are used to calculate the remaining value after removing full multiples of the divisor.

---

## 🛠️ How to Build & Run

Compile using:

```bash
gcc -o remainder main.c
./remainder
```

---

## ✅ Example Output

```bash
Input: remainder(34, 7)
Output: 6
```

---

### ✍️ Author

[Sac1802](https://github.com/Sac1802)
