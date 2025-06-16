# Binary Addition Kata

**Description:**
Write a function that takes two non-negative integers, adds them, and returns the sum as a binary string.

---

## Implementations

### 1. `convert_to_binary`

* Converts the sum of two integers to a binary string.
* Returns a pointer to a dynamically allocated string with the binary result.
* If the sum is zero, returns the string literal `"0"` (no allocation).
* **Note:** Caller must **not** free the result if it is `"0"`, but must free otherwise.

**Example:**

```c
char* result = convert_to_binary(51, 12);
printf("%s\n", result);  // Output: 111111
// free(result) if result != "0"
```

Output:
`111111`

---

### 2. `convert_to_binary2`

* Similar to `convert_to_binary`, but always returns a dynamically allocated string.
* If the sum is zero, returns an allocated string `"0"`.
* Caller **must** free the returned string in all cases.

**Example:**

```c
char* result = convert_to_binary2(51, 12);
printf("%s\n", result);  // Output: 111111
free(result);
```

Output:
`111111`

---

## Summary

Both functions convert the sum of two integers to their binary representation as a string. The main difference lies in how the zero case is handled regarding memory allocation.

---


