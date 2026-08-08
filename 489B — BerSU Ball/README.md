# Codeforces 489B — BerSU Ball

## Problem

There are some boys and girls.

Each boy and girl has a skill level.

A boy and a girl can form a dancing pair if their skill levels differ by **at most 1**.

We need to find the **maximum number of pairs** that can be formed.

---

## What Does the Output Mean?

The output is **one integer**.

It represents the maximum number of boy-girl pairs that can be formed.

For example:

```text
3
```

means that a maximum of **3 pairs** can be formed.

We do not need to print the actual pairs.

---

## Pair Condition

A boy and girl can be paired when:

```text
|boy_skill - girl_skill| <= 1
```

### Valid Pair

```text
Boy = 5
Girl = 6

|5 - 6| = 1
```

✅ They can form a pair.

### Valid Pair

```text
Boy = 5
Girl = 5

|5 - 5| = 0
```

✅ They can form a pair.

### Invalid Pair

```text
Boy = 5
Girl = 7

|5 - 7| = 2
```

❌ They cannot form a pair.

---

## Approach

We use **Sorting + Two Pointers**.

### Step 1: Sort Both Arrays

Sort the boys' skills and girls' skills.

Example:

```text
Boys:
1 4 6 2

After sorting:
1 2 4 6
```

```text
Girls:
5 1 5 7 9

After sorting:
1 5 5 7 9
```

---

### Step 2: Use Two Pointers

Use:

```text
i → boys
j → girls
```

Compare:

```text
boys[i]
girls[j]
```

### If difference is at most 1

Create a pair:

```cpp
ans++;
i++;
j++;
```

### If boy's skill is smaller

Move the boy pointer:

```cpp
i++;
```

### If girl's skill is smaller

Move the girl pointer:

```cpp
j++;
```

Continue until either all boys or all girls have been processed.

---

## Example

### Input

```text
4
1 4 6 2
5
5 1 5 7 9
```

### Sorted Arrays

```text
Boys:
1 2 4 6

Girls:
1 5 5 7 9
```

Possible pairs:

```text
1 ↔ 1
4 ↔ 5
6 ↔ 5
```

So the maximum number of pairs is:

```text
3
```

### Output

```text
3
```

---

## Algorithm

1. Read the number of boys.
2. Store their skill levels.
3. Read the number of girls.
4. Store their skill levels.
5. Sort both arrays.
6. Initialize two pointers `i` and `j` to `0`.
7. Compare the current boy and girl.
8. If their difference is at most `1`, make a pair.
9. Otherwise, move the pointer with the smaller skill.
10. Print the number of pairs.

---

## Complexity

### Time Complexity

```text
O(n log n + m log m)
```

Sorting takes most of the time.

### Space Complexity

```text
O(n + m)
```

for storing the two arrays.

---

## Concepts Used

- Arrays
- Sorting
- Two Pointers
- Greedy Algorithm
- Absolute Difference

---

## Tags

`Array` `Sorting` `Two Pointers` `Greedy` `Implementation`