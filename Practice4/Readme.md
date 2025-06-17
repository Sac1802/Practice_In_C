
# 🧠 Codewars Kata: Plural (C Version)

This repository contains a C implementation of the [Plural kata](https://www.codewars.com/kata/52ceafd1f235ce81aa00073a/c) from Codewars.

## 📝 Kata Description

**Challenge:**  
Write a function that returns `true` if the given number indicates plural (i.e., **0 or more than 1**), and `false` if it is exactly **1**.

### ✅ Requirements:
- Return `true` for inputs like: 0, 2, 10, etc.
- Return `false` for input `1`.

## 📄 Code Overview

```c
bool plural(size_t value) {
    return value > 1 || value == 0 ? true : false;
}
````

This function returns `true` if the number is 0 or greater than 1, and `false` otherwise.

## 🚀 How to Compile & Run

Make sure you have `gcc` installed. Then:

```bash
gcc -o plural main.c
./plural
```

You can edit the `value` inside the `main()` function to test other cases.

## 🧪 Example Output

```bash
Plurality of 0: 1
```
Where `1` represents `true` and `0` represents `false`.