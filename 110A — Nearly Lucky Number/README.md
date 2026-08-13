# Codeforces 110A — Nearly Lucky Number

## Problem

A number is called **lucky** if all its digits are:

```text
4 or 7
```

A number is called **nearly lucky** if the **number of lucky digits** in it is itself a lucky number.

For example:

```text
447777
```

contains `6` lucky digits.

Since `6` is not a lucky number, it is **not** nearly lucky.

---

## Example 1

```text
Input:
447474

Output:
YES
```

The number contains:

```text
4 4 7 4 7 4
```

All 6 digits are lucky.

Count:

```text
6
```

Since `6` is not lucky, this example would actually be:

```text
NO
```

---

## Example

```text
Input:
7747774

Output:
NO
```

Count the lucky digits:

```text
7 7 4 7 7 7 4
```

There are:

```text
7
```

lucky digits.

Since `7` is a lucky number:

```text
7 → lucky
```

Therefore the answer is:

```text
YES
```

---

## Approach

We only need to count how many digits in the given number are:

```text
4
```

or:

```text
7
```

After counting them, check whether the count is a lucky number.

A count is lucky if it contains only:

```text
4 or 7
```

For the constraints of this problem, the count can only be a small number, so we can simply check whether it is:

```text
4, 7, 44, 47, 74, 77
```

etc., depending on the maximum possible count.

---

## Algorithm

1. Read the number as a string.
2. Set `count = 0`.
3. Check every digit.
4. If the digit is `4` or `7`, increase `count`.
5. Check whether `count` contains only `4` and `7`.
6. If yes, print:
   ```text
   YES
   ```
7. Otherwise, print:
   ```text
   NO
   ```

---

## Example

```text
Input:
123456789
```

Lucky digits are:

```text
4
7
```

So:

```text
count = 2
```

`2` is not a lucky number.

Therefore:

```text
Output:
NO
```

---

## Key Idea

There are **two steps**:

```text
Number
   ↓
Count digits that are 4 or 7
   ↓
Check whether the count is lucky
   ↓
YES / NO
```

## Complexity

### Time Complexity

```text
O(n)
```

where `n` is the number of digits.

### Space Complexity

```text
O(1)
```

Only a counter is required apart from the input string.

## Concepts Used

- String
- Digit Traversal
- Counting
- Conditional Statements

## Tags

`Implementation` `Math` `String` `Counting`