# Codeforces 706B — Interesting drink

## Problem

Vasya has `n` drinks.

Each drink has a price.

For every day, Vasya has some amount of money `x`.

Find how many drinks he can afford.

A drink can be bought if:

```text
price <= x
```

## Example

```text
Input:
5
3 10 8 6 11
4
1
10
3
11
```

### Explanation

For `1`:

```text
No drink costs <= 1

Answer = 0
```

For `10`:

```text
3 6 8 10

Answer = 4
```

For `3`:

```text
3

Answer = 1
```

For `11`:

```text
3 6 8 10 11

Answer = 5
```

Therefore:

```text
Output:
0
4
1
5
```

## Approach

First, sort all drink prices.

Example:

```text
Before:
3 10 8 6 11

After:
3 6 8 10 11
```

For every query, we need to find how many prices are:

```text
<= x
```

Since the array is sorted, we can use **Binary Search**.

### Example

```text
Prices:
3 6 8 10 11

Money:
8
```

The affordable drinks are:

```text
3 6 8
```

So the answer is:

```text
3
```

Binary Search finds the last position containing a value less than or equal to `x`.

## Algorithm

1. Read `n`.
2. Read all drink prices.
3. Sort the prices.
4. Read the number of queries.
5. For every query:
   - Read the amount of money `x`.
   - Use Binary Search.
   - Find the last price `<= x`.
   - The number of affordable drinks is its index + `1`.
6. Print the answer.

## Binary Search Logic

If:

```text
prices[mid] <= x
```

then this drink can be afforded.

Store it as a possible answer and search to the **right**:

```text
left = mid + 1
```

There might be more affordable drinks.

If:

```text
prices[mid] > x
```

the price is too high, so search to the **left**:

```text
right = mid - 1
```

## Complexity

### Sorting

```text
O(n log n)
```

### Each Query

```text
O(log n)
```

### Total

```text
O(n log n + q log n)
```

### Space

```text
O(n)
```

## Key Idea

```text
Sort prices
     ↓
Binary Search
     ↓
Find last price <= money
     ↓
Index + 1
     ↓
Number of affordable drinks
```

## Concepts Used

- Array
- Sorting
- Binary Search
- Searching
- Queries
- Sorted Array