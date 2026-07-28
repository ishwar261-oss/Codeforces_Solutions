# 32B - Borze

## Problem Statement

The Borze code uses the following rules:

- `.` → `0`
- `-.` → `1`
- `--` → `2`

Given a Borze code string, decode it into its corresponding number sequence.

---

## Approach

Traverse the string from left to right.

- If the current character is `.`, output `0`.
- Otherwise:
  - If the next character is `.`, output `1`.
  - Otherwise, output `2`.

Move the index according to the symbol length.

---

## Algorithm

1. Read the Borze code string.
2. Traverse the string:
   - `.` → print `0`.
   - `-.` → print `1`.
   - `--` → print `2`.
3. Print the decoded sequence.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Strings
- Traversal
- Simulation

---

## Tags

`Strings` `Implementation` 