# 41A - Translation

## Problem

Given two strings `s` and `t`.

The translation is correct if string `t` is exactly the reverse of string `s`.

Print:

- `YES` if `t` is the reverse of `s`
- `NO` otherwise

---

## Approach

- Reverse the first string.
- Compare the reversed string with the second string.
- If both strings are equal, the translation is correct.

---

## Algorithm

1. Read strings `s` and `t`.
2. Reverse string `s`.
3. Compare `s` with `t`.
4. Print the result.

---

## Example

### Input

```
code
edoc
```

### Output

```
YES
```

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Strings
- Reverse Function
- String Comparison

---

## Tags

`Strings` `Implementation`