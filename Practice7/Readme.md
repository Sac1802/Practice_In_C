
# Neutralise – Codewars Kata (C implementation)

## 🧠 Description of the Kata

This kata focuses on comparing two strings of the same length, character by character.
Each character represents a "sign" — either `'+'` or `'-'`. The goal is to **neutralize** the strings:

* If the characters at the same position are the same (`'+'` and `'+'` or `'-'` and `'-'`), keep that character.
* If the characters differ (`'+'` and `'-'` or vice versa), replace it with `'0'`.

### 🔢 Example

```text
s1:  ++-+--
s2:  --++++
res: 000+0-
```

## ⚙️ Implementation in C

This solution uses a function `neutralize()` that takes two input strings `s1`, `s2`, and writes the result into `s3`. It compares each character of `s1` and `s2`, and writes the neutralized result accordingly.

### 🧪 Code Explanation

```c
void neutralize(const char *s1, const char *s2, char *s3) {
    for (int i = 0; i < strlen(s1); i++)
    {
        (s1[i] == s2[i]) ? (s3[i] = s1[i]) : (s3[i] = '0');
    }
    s3[strlen(s1)] = '\0'; // Null-terminate the result string
}
```

* It loops through each character in the input strings.
* Uses a ternary operator to compare `s1[i]` and `s2[i]`:

  * If equal, copies the character to `s3[i]`.
  * If not, assigns `'0'`.
* Finally, adds a null terminator at the end of `s3` to make it a valid C string.

### 🧪 Main Function (for Testing)

```c
int main(){
    char s1[] = "";
    char s2[] = "";
    char s3[sizeof(s1)];
    neutralize(s1, s2, s3);
    printf("Neutralized string: %s\n", s3);
    return 0;
}
```

> 🔧 This is a minimal test setup. You can replace `s1` and `s2` with actual test strings to try different inputs.

---

## 📌 Notes

* Make sure `s1` and `s2` are of equal length before calling `neutralize()`.
* The result is stored in `s3`, which must be preallocated with enough space to hold the result plus the null terminator.

[Neutralise](https://www.codewars.com/kata/65128732b5aff40032a3d8f0/c)
---

