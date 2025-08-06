Aquí tienes un **README breve y claro en inglés**, con:

* Lo más importante del código 🧠
* Ejemplos separados con entrada y salida 📥📤
* Formato limpio para usar en GitHub o documentación 📄

---

# 🧪 Are They the Same? – Code Summary

## 🔍 Problem Summary

Given two arrays of integers `a` and `b`, the goal is to determine whether each element in `b` is the **square of some element in `a`**, with the **same multiplicities**, regardless of order.

---

## ⚙️ Key Parts of the Code

```c
// Copies arrays a and b into new memory to safely modify them
int *tempArray = memcpy(malloc(n * sizeof(int)), a, n * sizeof(int));
int *tempArrayB = memcpy(malloc(n * sizeof(int)), b, n * sizeof(int));
```

```c
// Compares each squared element of a with b, ensuring no reuse
for(size_t i = 0; i < n; i++) {
    int squared = tempArray[i] * tempArray[i];
    for(size_t j = 0; j < n; j++) {
        if(squared == tempArrayB[j]) {
            count++;
            tempArray[i] = -1;      // Mark as used
            tempArrayB[j] = -1;     // Mark as used
            break;
        }
    }
}
```

```c
// If all elements matched, return true
if(count == n) return true;
```

* Memory is safely **freed** at all return points.
* **No elements are reused** for matching — respects multiplicity.

---

## ✅ Example Inputs & Outputs

### ✔️ Valid Example

```c
a = [11, 121, 144, 19, 19, 144, 161, 19]
b = [121, 14641, 20736, 361, 25921, 361, 20736, 361]

Returns: true
```

Why?

* Each element in `b` is the square of one in `a`
* The number `19` appears 3 times → `361` appears 3 times
* Order does not matter

---

### ❌ Invalid Example (wrong number)

```c
a = [11, 121, 144, 19, 19, 144, 161, 19]
b = [132, 14641, 20736, 361, 25921, 361, 20736, 361]

Returns: false
```

* `132` is not a square of any number in `a`

---

### ❌ Invalid Example (wrong frequency)

```c
a = [2, 2, 3]
b = [4, 9, 9]

Returns: false
```

* `2` appears twice → should have two `4`s
* But `4` appears only once

---
