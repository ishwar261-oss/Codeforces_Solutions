# Codeforces 131A — cAPS lOCK

## Problem

Sometimes the **Caps Lock** key is accidentally turned on.

You are given a word and need to determine whether it should be corrected.

The word should be changed if:

1. **All letters are uppercase**, or
2. **Only the first letter is lowercase and all remaining letters are uppercase**.

If either condition is true, change the case of **every letter**.

Otherwise, keep the word unchanged.

---

## Examples

### Example 1

```text
Input:
cAPS

Output:
Caps
```

The first character is lowercase and all remaining characters are uppercase.

So we change the case of every character.

---

### Example 2

```text
Input:
CAPS

Output:
caps
```

All characters are uppercase.

So we change every character to lowercase.

---

### Example 3

```text
Input:
Lock

Output:
Lock
```

The word does not satisfy the Caps Lock condition.

So it remains unchanged.

---

## Approach

We first check the characters from index `1`.

If every character from index `1` onward is uppercase, then the word can be corrected.

For example:

```text
cAPS
 ↑
first character
```

The remaining characters:

```text
APS
```

are all uppercase.

Therefore, change the case of the complete word.

---

## Algorithm

1. Read the string.
2. Assume all characters after the first are uppercase.
3. Check characters from index `1`.
4. If any character is lowercase, the condition is false.
5. If the condition is true:
   - Change uppercase letters to lowercase.
   - Change lowercase letters to uppercase.
6. Otherwise, leave the string unchanged.
7. Print the result.

---

## Dry Run

Input:

```text
cAPS
```

Check:

```text
A → uppercase
P → uppercase
S → uppercase
```

All remaining characters are uppercase.

Change every character:

```text
c → C
A → a
P → p
S → s
```

Output:

```text
Caps
```

---

## Another Example

Input:

```text
CAPS
```

All characters are uppercase.

Change:

```text
C → c
A → a
P → p
S → s
```

Output:

```text
caps
```

---

## When Should We NOT Change?

Consider:

```text
cApS
```

Characters after the first:

```text
A p S
```

`p` is lowercase.

Therefore, the condition is false.

Output remains:

```text
cApS
```

## Complexity

### Time Complexity

```text
O(n)
```

We check the string once and may change every character once.

### Space Complexity

```text
O(1)
```

We modify the string directly and use only a few variables.

---

## Concepts Used

- Strings
- Character Checking
- Uppercase / Lowercase
- `isupper()`
- `islower()`
- `toupper()`
- `tolower()`

---

## Key Takeaway

The important condition is:

```text
All characters after the first must be uppercase.
```

If true:

```text
Change the case of every character.
```

Otherwise:

```text
Keep the string unchanged.
```

---

## Tags

`String` `Implementation` `Character` `Case Conversion`