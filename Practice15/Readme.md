# 🧠 Kata: Simple Letter Removal

**Original Kata:** [Codewars – Simple Letter Removal](https://www.codewars.com/kata/5b728f801db5cec7320000c7/c)

## 📌 Description

You are given a lowercase string and an integer `k`.  
Your task is to remove exactly `k` characters from the string following these rules:

1. Remove all occurrences of `'a'`, then `'b'`, then `'c'`, and so on.
2. Always remove the **leftmost** matching character first.
3. If `k` is greater than the number of characters in the string, return an empty string.

### 🧪 Examples

```c
solve("abracadabra", 1);  // "bracadabra"
solve("abracadabra", 2);  // "brcadabra"
solve("abracadabra", 6);  // "rcdbr"
solve("abracadabra", 8);  // "rdr"
solve("abracadabra", 50); // ""
````

---

## ✅ Solution Logic

* A copy of the original string is created using dynamic memory (`malloc`).
* A loop runs through the string while tracking the current letter to remove (`'a' + index`).
* For each character:

  * If it matches the current target letter, it is removed by shifting the rest of the string left.
  * The removal counter `k` is decreased.
* The process continues until `k` characters have been removed or all target letters are exhausted (`'a'` to `'z'`).

---

## 💡 Key Details

* Original string is not modified.
* Memory is dynamically allocated and freed properly.
* Standard C libraries used: `<string.h>`, `<stdlib.h>`, `<stdio.h>`.
* Removal is done in-place using left-shifting logic.

---


## 🛠️ Build & Run

```bash
gcc -o main main.c
./main
```

---

## 🔢 Difficulty

**Kata level:** `7 kyu`
Perfect for practicing string manipulation, memory control, and algorithmic thinking in C.

---
