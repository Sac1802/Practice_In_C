# 📐 Integral of a Polynomial – C Implementation

This repository contains a solution to the Codewars kata [Integral of a Polynomial](https://www.codewars.com/kata/59811fd8a070625d4c000013/c) implemented in C.

## 🧠 Kata Description

Given the coefficient and exponent of a single-term polynomial, return its indefinite integral as a string in the format:

```

(coefficient / (exponent + 1))x^(exponent + 1)

```

### Example
Input:
```

coefficient = 20
exponent = 1

```

Output:
```

10x^2

````

## ⚙️ Workflow

1. The `integrate` function calculates the new exponent and coefficient.
2. It stores the result as a formatted string (e.g., `10x^2`).
3. The `main` function demonstrates usage with a test case.
4. Memory is allocated dynamically and freed after use.

## ▶️ Compile & Run

```bash
gcc -o integral integral.c
./integral
````

---
