    # 116A - Tram

## Problem

A tram travels through `n` stops.

At each stop:
- Some passengers leave the tram.
- Some passengers enter the tram.

Find the **minimum capacity** of the tram, which is equal to the **maximum number of passengers present at any point** during the journey.

---

## Approach

- Initialize the current number of passengers as `0`.
- For each stop:
  - Subtract the passengers leaving.
  - Add the passengers entering.
- Update the maximum number of passengers after each stop.
- Print the maximum value.

---

## Algorithm

1. Read `n`.
2. Initialize:
   - `current = 0`
   - `maximum = 0`
3. Repeat for all stops:
   - Read `exit` and `enter`.
   - Update `current = current - exit + enter`.
   - Update `maximum = max(maximum, current)`.
4. Print `maximum`.

---

## Example

### Input

```
4
0 3
2 5
4 2
4 0
```

### Output

```
6
```

### Explanation

Passenger count after each stop:

- Stop 1: `0 - 0 + 3 = 3`
- Stop 2: `3 - 2 + 5 = 6`
- Stop 3: `6 - 4 + 2 = 4`
- Stop 4: `4 - 4 + 0 = 0`

The maximum number of passengers is **6**.

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Simulation
- Implementation
- Variables
- Loops

---

## Tags

`Implementation` `Simulation`