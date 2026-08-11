# Codeforces 1367B — Even Array

## Problem

You are given an array.

For every index `i`:

- If `i` is **even**, the value at that position should be **even**.
- If `i` is **odd**, the value at that position should be **odd**.

You can swap any two elements.

Your task is to find the **minimum number of swaps** required to make the array satisfy this condition.

---

## Example

### Input

```text
1
4
3 2 1 4
```

Using 0-based indexing:

```text
Index:  0  1  2  3
Array:  3  2  1  4
```

Required:

```text
Index:  0  1  2  3
Need:   E  O  E  O
```

Check the array:

```text
Index 0 → 3 → Odd  ❌
Index 1 → 2 → Even ❌
Index 2 → 1 → Odd  ❌
Index 3 → 4 → Even ❌
```

There are two wrong even positions and two wrong odd positions.

We can fix them using 2 swaps.

### Output

```text
2
```

---

## Main Idea

We don't need to actually perform the swaps.

We only count the wrong positions.

### Wrong Even Position

An even index contains an odd number.

Example:

```text
Index = 2
Value = 5
```

This is wrong because index `2` needs an even value.

Count it as:

```text
wrongEven++
```

---

### Wrong Odd Position

An odd index contains an even number.

Example:

```text
Index = 3
Value = 8
```

This is wrong because index `3` needs an odd value.

Count it as:

```text
wrongOdd++
```

---

## Why Do We Need Equal Counts?

One swap can fix:

```text
Wrong Even Position
        +
Wrong Odd Position
```

So the number of both types of mistakes must be equal.

For example:

```text
wrongEven = 2
wrongOdd = 2
```

Answer:

```text
2
```

---

## When Is the Answer `-1`?

If:

```text
wrongEven != wrongOdd
```

then it is impossible to fix the array.

Example:

```text
wrongEven = 3
wrongOdd = 2
```

There is no matching wrong position for one of the mistakes.

Therefore:

```text
-1
```

---

## Algorithm

For every element:

1. Check whether the index is even or odd.
2. Check whether the value is even or odd.
3. If an even index contains an odd value:
   ```text
   wrongEven++
   ```
4. If an odd index contains an even value:
   ```text
   wrongOdd++
   ```
5. After checking the whole array:
   - If `wrongEven == wrongOdd`, answer is `wrongEven`.
   - Otherwise, answer is `-1`.

---

## Dry Run

Consider:

```text
arr = [3, 2, 1, 4]
```

### Index 0

```text
Index → Even
Value → Odd
```

Wrong:

```text
wrongEven = 1
```

### Index 1

```text
Index → Odd
Value → Even
```

Wrong:

```text
wrongOdd = 1
```

### Index 2

```text
Index → Even
Value → Odd
```

Wrong:

```text
wrongEven = 2
```

### Index 3

```text
Index → Odd
Value → Even
```

Wrong:

```text
wrongOdd = 2
```

Finally:

```text
wrongEven = 2
wrongOdd = 2
```

Therefore:

```text
Answer = 2
```

---

## Complexity

### Time Complexity

```text
O(n)
```

We check every element once.

### Space Complexity

```text
O(1)
```

Only counters are needed.

---

## Important Observation

The most important idea is:

```text
Wrong even position ↔ Wrong odd position
```

Each valid swap fixes one of each type.

Therefore:

```text
if wrongEven == wrongOdd
    answer = wrongEven
else
    answer = -1
```

---

## Concepts Used

- Arrays
- Parity
- Greedy
- Counting
- Indexing

---

## Tags

`Array` `Greedy` `Implementation` `Parity` `Counting`