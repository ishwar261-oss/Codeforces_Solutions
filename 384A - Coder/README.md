# 384A - Coder

## Problem

Place the maximum number of coders on an `n × n` board so that no two coders are adjacent horizontally or vertically.

Print:
- The maximum number of coders.
- One valid board configuration.

Use:
- `C` for a coder.
- `.` for an empty cell.

---

## Approach

- Arrange coders in a chessboard pattern.
- Place a coder on every cell where `(row + column)` is even.
- This guarantees that no two coders are adjacent.

---

## Algorithm

1. Read `n`.
2. Print `(n × n + 1) / 2`.
3. Traverse the board:
   - If `(i + j)` is even, print `C`.
   - Otherwise, print `.`.
4. Move to the next row.

---

## Example

### Input

```
3
```

### Output

```
5
C.C
.C.
C.C
```

---

## Complexity

- **Time Complexity:** `O(n²)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Implementation
- Matrix Traversal
- Chessboard Pattern

---

## Tags

`Implementation`