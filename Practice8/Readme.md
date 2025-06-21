# 🧠 Kata: Remove exclamation marks

🔗 [Codewars Link](https://www.codewars.com/kata/57a0885cbb9944e24c00008e)

### 📌 Description

The goal is to remove **all exclamation marks (`!`)** from a given string.

---

## 🔄 Workflow

1. The function receives an input string and a buffer for the output.
2. It loops through each character of the input string.
3. If the character is **not** `'!'`, it's added to the output string.
4. The output string is closed with a null terminator (`\0`).

---

## 🧪 Input / Output

* **Input:** `"Hello! How are you doing today?!"`
* **Output:** `"Hello How are you doing today"`

---

## ⚠️ Key Points

* Proper memory handling is important: the output buffer must be large enough.
* String must end with `\0` to be valid in C.
* Iteration must preserve the order of characters, skipping only `'!'`.

---

