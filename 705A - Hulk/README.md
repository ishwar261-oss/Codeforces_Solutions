# 705A - Hulk

## Problem

Print a sentence consisting of `n` parts.

- Odd positions contain `"I hate"`.
- Even positions contain `"I love"`.
- Connect each part with `" that "`.
- End the sentence with `" it"`.

---

## Approach

- Loop from `1` to `n`.
- If the position is odd, print `"I hate"`.
- If the position is even, print `"I love"`.
- Print `" that "` after every part except the last.
- Print `" it"` after the last part.

---

## Algorithm

1. Read `n`.
2. Traverse from `1` to `n`.
3. Print `"I hate"` for odd positions.
4. Print `"I love"` for even positions.
5. Print `" that "` or `" it"` accordingly.

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Strings
- Loops
- Implementation

---

## Tags

`Strings` `Implementation`