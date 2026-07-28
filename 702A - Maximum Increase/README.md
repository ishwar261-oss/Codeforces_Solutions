# 702A - Maximum Increase

## Problem Statement

You are given an array of integers.

Find the maximum length of a contiguous strictly increasing subarray.

---

## Approach

Traverse the array once while keeping track of the current increasing subarray length.

- If the current element is greater than the previous element, increase the count.
- Otherwise, reset the count to `1`.
- Update the maximum length whenever needed.

---

## Algorithm

1. Read the array.
2. Initialize `cnt = 1` and `ans = 1`.
3. Traverse the array from the second element.
4. If the current element is greater than the previous one, increment `cnt`; otherwise reset it to `1`.
5. Update `ans`.
6. Print `ans`.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Arrays
- Traversal
- Counting

---

## Tags

`Arrays` `Implementation` `800`