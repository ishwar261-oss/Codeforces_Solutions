# 510A - Fox And Snake

## Problem

Print an `n × m` pattern representing the path of a snake.

- Every odd row (1st, 3rd, 5th...) is filled completely with `#`.
- Every even row contains only one `#`:
  - First even row → `#` at the end.
  - Next even row → `#` at the beginning.
- Continue alternating this pattern.

---

## Approach

- Traverse each row.
- If the row index is even, print all `#`.
- Otherwise, alternate between:
  - `.....#`
  - `#.....`
- Toggle the direction after every even row.

---

## Algorithm

1. Read `n` and `m`.
2. Initialize `right = true`.
3. Traverse each row:
   - If `i` is even, print `m` times `#`.
   - Else:
     - If `right` is true, print `m-1` dots followed by `#`.
     - Otherwise, print `#` followed by `m-1` dots.
     - Toggle `right`.
4. Move to the next line.

---

## Example

### Input

```
3 3
```

### Output

```
###
..#
###
```

---

## Complexity

- **Time Complexity:** `O(n × m)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Implementation
- Pattern Printing
- Loops

---

## Tags

`Implementation`