# 686A - Free Ice Cream

## Problem

There are `x` ice cream packs initially.

You are given `n` operations:

- `+ d` → Add `d` ice cream packs.
- `- d` → Give away `d` ice cream packs.
  - If enough packs are available, subtract them.
  - Otherwise, the child becomes distressed.

Print the remaining ice cream packs and the number of distressed children.

---

## Approach

- Read the initial number of ice cream packs.
- Process each operation one by one.
- For `'+'`, increase the number of packs.
- For `'-'`, subtract if possible; otherwise, increase the distressed count.
- Print the final number of packs and distressed children.

---

## Algorithm

1. Read `n` and `x`.
2. Initialize `distressed = 0`.
3. For each operation:
   - If `'+'`, add to `x`.
   - If `'-'`:
     - If `x >= d`, subtract `d`.
     - Otherwise, increment `distressed`.
4. Print `x` and `distressed`.

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Strings
- Simulation
- Conditional Statements

---

## Tags

`Implementation` `Simulation` `Strings`