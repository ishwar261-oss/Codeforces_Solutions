# Codeforces 144A — Arrival of the General

## Problem

There are `n` soldiers standing in a line.

Each soldier has a different or equal height.

We need to arrange them so that:

- The **tallest soldier** is at the **first position**.
- The **shortest soldier** is at the **last position**.

We can only swap **two neighboring soldiers**.

Our task is to find the **minimum number of swaps** needed.

---

## Important Rules

### Tallest Soldier

If there are multiple soldiers with the maximum height, choose the **leftmost** tallest soldier.

### Shortest Soldier

If there are multiple soldiers with the minimum height, choose the **rightmost** shortest soldier.

---

## Example

### Input

```text
4
33 44 11 22
```

Array:

```text
33 44 11 22
```

Tallest soldier:

```text
44
```

Index:

```text
1
```

Shortest soldier:

```text
11
```

Index:

```text
2
```

---

## Moving the Tallest

The tallest soldier is at index `1`.

To move him to index `0`:

```text
33 44 11 22
↓
44 33 11 22
```

Number of swaps:

```text
1
```

---

## Moving the Shortest

The shortest soldier is now at index `2`.

Move him to the last position:

```text
44 33 11 22
↓
44 33 22 11
```

Number of swaps:

```text
1
```

Total:

```text
1 + 1 = 2
```

### Output

```text
2
```

---

## Approach

We don't actually need to perform all the swaps.

We only need to calculate how many swaps are required.

### For the Tallest Soldier

If the tallest soldier is at index:

```text
maxIndex
```

He needs:

```text
maxIndex
```

swaps to reach index `0`.

---

### For the Shortest Soldier

If the shortest soldier is at index:

```text
minIndex
```

He needs:

```text
n - 1 - minIndex
```

swaps to reach the last position.

---

## Important Case

Suppose:

```text
maxIndex > minIndex
```

The tallest soldier moves to the left and passes the shortest soldier.

Therefore, one swap is counted twice.

So we subtract `1`.

```cpp
if (maxIndex > minIndex)
    swaps--;
```

---

## Algorithm

1. Read `n`.
2. Store all soldier heights.
3. Find the **leftmost tallest** soldier.
4. Find the **rightmost shortest** soldier.
5. Calculate:
   ```text
   maxIndex + (n - 1 - minIndex)
   ```
6. If:
   ```text
   maxIndex > minIndex
   ```
   subtract `1`.
7. Print the answer.

---

## C++ Code

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxIndex = 0;
    int minIndex = 0;

    // Find leftmost tallest soldier
    for (int i = 1; i < n; i++) {
        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
    }

    // Find rightmost shortest soldier
    for (int i = 1; i < n; i++) {
        if (a[i] <= a[minIndex]) {
            minIndex = i;
        }
    }

    int swaps = maxIndex + (n - 1 - minIndex);

    // One swap is counted twice
    if (maxIndex > minIndex) {
        swaps--;
    }

    cout << swaps << endl;

    return 0;
}
```

---

## Complexity

### Time Complexity

```text
O(n)
```

We scan the array to find the tallest and shortest soldiers.

### Space Complexity

```text
O(n)
```

We store the array.

---

## Concepts Used

- Arrays
- Greedy
- Index Calculation
- Simulation
- Minimum Swaps

---

## Key Takeaway

Instead of actually performing every adjacent swap, calculate the number of positions each soldier needs to move.

```text
Tallest → maxIndex

Shortest → n - 1 - minIndex
```

Then handle the overlap case:

```cpp
if (maxIndex > minIndex)
    swaps--;
```

---

## Tags

`Array` `Greedy` `Implementation` `Simulation` `Minimum Swaps`