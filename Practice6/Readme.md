# 🛣️ Will You Make It? (Codewars Kata)

This repository contains a solution to the [Codewars kata "Will you make it?"](https://www.codewars.com/kata/5861d28f124b35723e00005e/c), implemented in C.

## 🧠 Kata Description

You are on a road trip and need to determine if your vehicle can reach the next gas station.

**Given:**
- `distance_to_pump`: Distance to the next gas station (in miles)
- `mpg`: Vehicle's fuel efficiency (miles per gallon)
- `fuel_left`: Remaining fuel in gallons

**Goal:**
Return `true` if you can make it to the gas station; otherwise, return `false`.

**Example:**
```c
zero_fuel(100, 25, 3); // returns false (3 * 25 = 75 < 100)
````

## ⚙️ Code Overview

```c
bool zero_fuel(double distance_to_pump, double mpg, double fuel_left) {
    return (fuel_left * mpg) >= distance_to_pump ? true : false;
}
```

### 🔁 Workflow

1. The function calculates how far the car can go: `fuel_left * mpg`.
2. It compares that value with the required distance.
3. If the car can travel **at least** as far as the distance to the pump, it returns `true`; otherwise, `false`.

### 🧪 Example in `main()`

```c
int main() {
    bool van_drive = zero_fuel(100, 25, 3);
    printf("manages to reach the next gas station: %d", van_drive );
}
```

* This test case prints `0` (false) because `3 * 25 = 75`, and 75 is less than 100.

> 💡 Note: The `bool` type prints as `1` (true) or `0` (false) in C using `%d` in `printf`.

---


