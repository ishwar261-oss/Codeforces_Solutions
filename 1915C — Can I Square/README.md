# 1915C — Can I Square?

## Problem

You are given an array of `n` positive integers.

Find the **sum of all elements** and determine whether this sum is a **perfect square**.

If it is a perfect square, print:

```text
YES
```

Otherwise, print:

```text
NO
```

## Example

```text
Input:
3
3
1 3 5
3
1 2 3
4
1 4 4 9

Output:
YES
NO
YES
```

## Explanation

For the first test case:

```text
1 + 3 + 5 = 9
```

Since:

```text
3 × 3 = 9
```

`9` is a perfect square.

```text
YES
```

For the second test case:

```text
1 + 2 + 3 = 6
```

There is no integer whose square is `6`.

```text
NO
```

For the third test case:

```text
1 + 4 + 4 + 9 = 18
```

Actually, `18` is not a perfect square, so the result would be:

```text
NO
```

## Approach

First calculate the sum of all elements.

Then find the square root of the sum.

If the square of the integer square root is equal to the original sum, then the sum is a perfect square.

For example:

```text
sum = 25
```

Square root:

```text
sqrt(25) = 5
```

Check:

```text
5 × 5 = 25
```

Therefore:

```text
YES
```

## Algorithm

1. Read the number of test cases.
2. For each test case, read `n`.
3. Initialize `sum = 0`.
4. Add every array element to `sum`.
5. Calculate the integer square root of `sum`.
6. Check:
   ```text
   root × root == sum
   ```
7. If true, print `YES`.
8. Otherwise, print `NO`.

## Key Idea

We don't need to check every possible square.

Just calculate:

```text
sum
  ↓
sqrt(sum)
  ↓
root × root == sum?
  ↓
YES / NO
```

## Complexity

### Time Complexity

```text
O(n)
```

Every array element is visited once.

### Space Complexity

```text
O(1)
```

Only the sum and a few variables are stored.

## Important Point

Use `long long` for the sum because the total can be larger than the range of a normal `int`.

## Concepts Used

- Array
- Traversal
- Sum
- Perfect Square
- Square Root
- Math
- `long long`
- Implementation