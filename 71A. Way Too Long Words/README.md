# 71A. Way Too Long Words

> **Problem Link:** https://codeforces.com/problemset/problem/71/A

## Problem Statement

Sometimes words are too long to write repeatedly.

For every word:

- If its length is **10 or fewer**, print it as it is.
- Otherwise, abbreviate it by printing:
  - First character
  - Number of omitted characters
  - Last character

Example:

```
localization
↓

l10n
```

---

## Approach

Traverse every word.

For each word:

- If its length is less than or equal to **10**, print the original word.
- Otherwise:
  - Print the first character.
  - Print the number of characters between the first and last character.
  - Print the last character.

---

## Algorithm

1. Read the number of test cases.
2. For every word:
   - Find its length.
   - If length ≤ 10
     - Print the word.
   - Else
     - Print first character.
     - Print `length - 2`.
     - Print last character.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(n)** (where **n** is the length of the word) |
| **Space Complexity** | **O(1)** |

---

## Example

### Input

```
4
word
localization
internationalization
hello
```

### Output

```
word
l10n
i18n
hello
```

---

## Tags

- Strings
- Implementation