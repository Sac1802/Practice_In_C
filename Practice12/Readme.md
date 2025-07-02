# 🔍 Find All Occurrences - Codewars Kata Solution

## 📚 Description

This repository contains a C solution to the Codewars kata "**Find All Occurrences**".
The kata challenge is available here:
[https://www.codewars.com/kata/59a9919107157a45220000e1/c](https://www.codewars.com/kata/59a9919107157a45220000e1/c) 🎯

### 📝 Kata Summary

Given an array of integers and a target integer `n`, return an array containing all index positions of `n` in the array.
If `n` is not found, return an empty array.
The solution also returns the count of occurrences via a pointer argument.

---

## 💡 Solution Overview

The main function implemented is:

```c
size_t *find_all(size_t a, const int array[a], int number, size_t *z);
```

* `a`: Length of the input array. 📏
* `array`: Input integer array. 🔢
* `number`: Number to find in the array. 🎯
* `z`: Pointer to store the number of occurrences found. 📌

The function dynamically allocates an array of indices where `number` appears, stores the count in `*z`, and returns the array. The caller is responsible for freeing the allocated memory. 💾

---

## 🛠️ Workflow

1. Clone the repository or download the source files. 📥
2. Compile the program using:

   ```
   gcc practice12.c -o practice12
   ```
3. Run the executable:

   ```
   ./practice12
   ```
4. Review the output and test with different inputs as needed. 🔍
5. Modify the code or tests and repeat compilation and execution. 🔄
6. Commit and push changes following your version control practices. 💻

---

## 🚀 Usage Example

```c
int data[] = {6, 9, 3, 4, 3, 82, 11};
size_t length = sizeof(data) / sizeof(data[0]);
int target = 3;
size_t result_size = 0;

size_t *indices = find_all(length, data, target, &result_size);

printf("Found %d at indices: ", target);
for (size_t i = 0; i < result_size; i++) {
    printf("%zu ", indices[i]);
}

free(indices);
```

Expected output:

```
Found 3 at indices: 2 4
```

---

## ✍️ Author

Sac1802

---