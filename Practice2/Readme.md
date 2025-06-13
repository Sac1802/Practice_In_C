# Plus / Minus String Parser  
*Solution in C for the CodeWars kata*  
<https://www.codewars.com/kata/5809b62808ad92e31b000031/c>

---

## Problem Statement  
The kata delivers an ASCII string that contains **positive integers** separated by the  
keywords `plus` and `minus`, e.g.

```
4697minus34208minus14629plus56284plus50036minus49802minus40858
```

The task is to evaluate the expression and return the final integer.

---

## This Repository  
`arithmetic_parser.c` shows **two independent approaches** that reach the same result (`-28480`):

| Function | Style & tools | Key feature |
|----------|---------------|-------------|
| `function` | builds each number digit-by-digit in a local buffer | manual parser; uses `atoi()` when a number ends |
| `second` | pointer-driven scanner that lets `strtol()` do the heavy lifting | compact, faster, and easier to maintain |

Both functions  
* return the result as a `char*` allocated with `malloc()` (**caller must `free()`**),  
* compile warning-free with `-Wall -Wextra` on any C89+ compiler.

---

## Build & Run

```bash
gcc -Wall -Wextra arithmetic_parser.c -o parser
./parser
```

Expected output:

```
function() result : -28480
second()   result : -28480
```

---

## Walk-through of Each Implementation

### 1. `function` — Digit-by-Digit (legacy style)

```
for every character i in input
└─ if it is a digit
     • append to stringValue[]
     • if next char is NOT a digit
          – terminate stringValue
          – convert with atoi()
          – add or subtract from total
          – reset index / isNegative
   else if slice starts with "minus" → isNegative = true
   else if slice starts with "plus"  → isNegative = false
```

Pros: straightforward, no library magic.  
Cons: manual buffer handling, more branches, slower.

### 2. `second` — Pointer Scanner (`strtol`)

```
while *p
└─ if "plus"  → isNegative = false , p += 4
   else if "minus" → isNegative = true , p += 5
   else if not a digit → ++p
   else
        value = strtol(p, &end, 10)
        total += isNegative ? -value : value
        p = end   // jump past the whole number
```

Pros: single linear pass, `strtol` handles any digit run, minimal bookkeeping.  
Cons: depends on `<ctype.h>` / `<stdlib.h>` helpers (still ISO C).

---

## Memory Notes  
* Result buffer: 11 decimal digits + NUL (`"-2147483648"`) → **12 bytes**.  
* Both functions allocate once and write once; no dynamic growth needed.

---
