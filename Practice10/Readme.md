## 🧠 Codewars Kata: **Count the Characters**

🔗 [View Kata on Codewars](https://www.codewars.com/kata/57a6633153ba33189e000074/c)

---

### 📄 Description

This kata requires counting how many times each character appears in a given string.

The function should return a list of tuples (in C, represented as a struct) containing:

* The character.
* The number of times it appears.

**Important rules:**

* The result must follow the **order of first appearance**.
* If the input string is empty, return an **empty list**.

---

### ⚙️ Workflow

1. A copy of the input string is created to allow internal modification.
2. The string is scanned from left to right.
3. For each character that hasn't been processed:

   * Count how many times it appears in the entire string.
   * Mark all of its appearances as processed using `'\0'`.
   * Store the character and its count in a list of structures.
4. Return the final list and the total number of unique characters found.

---

### 💡 Use Cases

* Text analysis or basic frequency counting.
* Preprocessing in parsing or tokenization.
* Teaching fundamental concepts like iteration, memory handling, and string manipulation in C.
* Useful for understanding how to manage dynamic memory and preserve order during filtering tasks.

---
