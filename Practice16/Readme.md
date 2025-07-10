# 🔁 Longest Prefix Suffix (Codewars Kata)

This project implements a solution to the Codewars kata:  
**"Longest Prefix Suffix"**  
🔗 [View Kata on Codewars](https://www.codewars.com/kata/5ce969ab07d4b7002dcaa7a1)

---

## 🧠 Problem Description

Given a lowercase string, return the length of the longest substring that is **both a prefix and a suffix**, **without overlapping**.

### Examples

| Input        | Output | Explanation                          |
|--------------|--------|--------------------------------------|
| `"abcd"`     | `0`    | No prefix equals suffix              |
| `"abcda"`    | `1`    | `"a"` is both prefix and suffix      |
| `"abcdabc"`  | `3`    | `"abc"` is both prefix and suffix    |
| `"aaaa"`     | `2`    | `"aa"` is both prefix and suffix     |
| `"a"`        | `0`    | Can't overlap                        |

---

## ⚙️ Logic and Flow

1. **Input:** A string `string`.
2. **Goal:** Find the longest prefix that is also a suffix, with no overlap.
3. **Constraint:** `prefix_length <= len / 2` to avoid overlapping.
4. Loop from `len/2` down to `1`:
   - Compare the prefix `string[0:i]`
   - With the suffix `string[len - i:len]`
   - If they match, return `i`
5. If no match found, return `0`.


---

## ✅ Status

* ✅ Algorithm implemented in C
* ✅ Matches all sample tests from Codewars
* ✅ Manual testing supported via `main()`

---
