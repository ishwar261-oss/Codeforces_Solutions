# Word Capitalization

## Problem Statement

Given a word, capitalize its **first letter**. If the first letter is already uppercase, leave the word unchanged.

---

## Example 1

### Input
```text
ApPLe
```

### Output
```text
ApPLe
```

---

## Example 2

### Input
```text
konjac
```

### Output
```text
Konjac
```

---

## Approach

The problem only requires modifying the **first character** of the string.

### Algorithm

1. Read the input string.
2. Convert the first character to uppercase using `toupper()`.
3. Print the updated string.

---

## Dry Run

### Input

```text
konjac
```

Initial String:

```text
k o n j a c
```

First Character:

```text
k
```

After applying `toupper()`:

```text
K
```

Final String:

```text
Konjac
```

---

## C++ Solution

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    cin >> s;

    s[0] = toupper(s[0]);

    cout << s;

    return 0;
}
```

---

## Complexity Analysis

- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`

---

## Key Insight

Only the first character of the string needs to be checked. The `toupper()` function converts a lowercase letter to uppercase while leaving an already uppercase letter unchanged, making it the simplest and most efficient solution.

---

## Complexity Summary

| Approach | Time Complexity | Space Complexity |
|----------|-----------------|------------------|
| `toupper()` | **O(1)** | **O(1)** ✅ |
| ASCII Conversion | **O(1)** | **O(1)** |

---

### ✅ Optimal Approach

- **Algorithm:** `toupper()` Function
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
- **Reason:** Only one character is modified, making the solution simple and efficient.