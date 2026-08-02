# 791A - Bear and Big Brother

## Problem Statement

Limak and Bob have different weights.

- Every year, Limak's weight becomes **3 times** its current weight.
- Every year, Bob's weight becomes **2 times** its current weight.

Determine the minimum number of years required for Limak to become **strictly heavier** than Bob.

---

## Approach

Simulate the weight growth year by year.

- Multiply Limak's weight by `3`.
- Multiply Bob's weight by `2`.
- Count the number of years until Limak's weight exceeds Bob's weight.

---

## Algorithm

1. Read Limak's and Bob's weights.
2. Initialize `years = 0`.
3. While `Limak <= Bob`:
   - Multiply Limak by `3`.
   - Multiply Bob by `2`.
   - Increment `years`.
4. Print `years`.

---

## C++ Solution

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int years = 0;

    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }

    cout << years;

    return 0;
}
```

---

## Complexity Analysis

- **Time Complexity:** `O(log n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Mathematics
- Simulation
- Loops

---

## Tags

`Math` `Simulation` `Implementation` `800`