# 707A - Brain's Photos

## Problem

Brain has a photo represented as an `n × m` matrix.

Each cell contains one of the following characters:

- `B` → Black
- `W` → White
- `G` → Gray
- `C` → Cyan
- `M` → Magenta
- `Y` → Yellow

If the photo contains at least one of `C`, `M`, or `Y`, it is considered a **color** photo. Otherwise, it is **black and white**.

Print:

- `#Color` if the photo is colored.
- `#Black&White` otherwise.

---

## Approach

- Read each pixel of the matrix.
- Check if any pixel is `C`, `M`, or `Y`.
- If found, mark the image as colored.
- Print the result.

---

## Algorithm

1. Read `n` and `m`.
2. Initialize `color = false`.
3. Traverse all pixels.
4. If any pixel is `C`, `M`, or `Y`, set `color = true`.
5. Print:
   - `#Color` if `color` is true.
   - `#Black&White` otherwise.

---

## Example

### Input

```
2 3
W W B
G B W
```

### Output

```
#Black&White
```

---

## Complexity

- **Time Complexity:** `O(n × m)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Matrix Traversal
- Character Comparison
- Implementation

---

## Tags

`Implementation` `Matrix`