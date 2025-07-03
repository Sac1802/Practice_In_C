# 🧠 Kata: Interlocking Binary Pairs

## 📍 Description

Given two non-negative integers, determine if they form an **interlocking binary pair**.

Two numbers are said to interlock if their binary representations:

- **Do not share any bits set to `1` in the same position** (starting from the right).
- If the binary representations are of different lengths, **the unmatched left-most bits are ignored**.

### Examples:

```

a = 9  → 1001
b = 4  → 0100   ✅ Interlockable

a = 3  → 0011
b = 6  → 0110   ❌ Not interlockable

````

🔗 [Codewars Kata Link](https://www.codewars.com/kata/628e3ee2e1daf90030239e8a/c)

---

## 🧩 Approach & Workflow

1. **Problem Understanding**:
   - Check if both numbers have a `1` in the same bit position.
   - If so, they are not interlockable.
   - Ignore unmatched higher-order bits when the lengths differ.

2. **Implemented Strategies**:
   - ✅ Two solutions were developed:
     - A **manual binary decomposition**, comparing each bit individually.
     - An **optimized bitwise solution** using `&` directly.

3. **Conflict Detection**:
   - If `(a & b) == 0`, no overlapping `1` bits → ✅ interlockable.
   - If `(a & b) != 0`, overlap exists → ❌ not interlockable.

4. **Testing**:
   - Covered edge cases (zeroes, bit length differences).
   - Validated correctness of both implementations.

---

## ✅ Implemented Solutions

| Function | Description |
|----------|-------------|
| `interlockable()` | Step-by-step logic using arrays and manual bit comparison. |
| `interlockable2()` | Optimized single-line solution using `!(a & b)`. |

Both are functionally correct and return the same result.

---

## 🧪 Example Test Cases

```c
assert(interlockable(9, 4) == true);      // 1001 & 0100 → OK
assert(interlockable(3, 6) == false);     // 0011 & 0110 → conflict
assert(interlockable(0, 0) == true);      // All bits off
assert(interlockable(0, 15) == true);     // One number is zero
assert(interlockable(255, 255) == false); // Full overlap
assert(interlockable(1024, 1) == true);   // No overlapping bits
````

---

## 👨‍💻 Author

> Solution by **Sac1802** as part of daily kata practice in C, focusing on logic and bitwise operation mastery.
