# 🖐️ Binary Representation of Fingers

> **Author:** Sac1802
> **Kata link:** [Binary Representation of Fingers – Codewars](https://www.codewars.com/kata/565f1bd8f97d3e59c400014a)

## 🧠 About the Kata

This kata challenges you to interpret a binary string where each bit represents whether a finger is raised (`1`) or not (`0`). The string can be up to 5 bits long and maps to the following fingers (from left to right):

```
Bit index:     0     1      2      3     4
Finger:     Pinkie Ring Middle Index Thumb
```

For example:
Input `"101"` would mean:

* Pinkie: `0` → not raised
* Ring: `1` → raised
* Middle: `0` → not raised
* Index: `1` → raised
* Thumb: not included (string has only 3 digits)

---

## 🔄 Workflow

1. **Input**: A binary string of up to 5 characters.
2. **Validation**: Only characters `'0'` and `'1'` are allowed.
3. **Shift Logic**: If the binary string has fewer than 5 digits, it's aligned to the right. The left padding is ignored.
4. **Mapping**: Each `'1'` is translated to its corresponding finger based on its position.
5. **Output**: An array of active (raised) fingers returned as enum values, and then printed with readable names.

---

## 🔧 Code Structure

```c
enum fingers {PINKIE, RING, MIDDLE, INDEX, THUMB};
```

Defines the finger identifiers, ordered to match the bit positions.

```c
size_t get_fingers(const char *binary, enum fingers digits[5]);
```

Parses the binary string, fills the `digits` array with active fingers (as enums), and returns the count of active fingers.

```c
int main();
```

Used for testing. It prints the finger names corresponding to the active enum values returned by `get_fingers`.

---

## 💡 Example Execution

```c
Input: "101"
```

```
Output: Ring Index
```

This means the second and fourth fingers are raised (from left to right: Pinkie, Ring, Middle, Index, Thumb).

---

## ✅ Key Considerations

* The binary string is aligned from the right, not padded with zeros on the left.
* The output fingers are listed in order from left to right, regardless of the string length.
* This solution is simple, efficient, and easy to expand (e.g., custom finger labels, different hand models, etc).

