# 732A. Buy a Shovel

## Problem

Polycarp wants to buy a shovel.

The price of one shovel is `k` burles.

He can buy multiple shovels, so the total cost can be:

```text
k × 1
k × 2
k × 3
...
```

Polycarp has a special coin with value `r`.

He can pay exactly if the last digit of the total price is:

```text
0
```

or:

```text
r
```

Find the **minimum number of shovels** Polycarp needs to buy.

## Example

```text
Input:
117 3

Output:
9
```

Explanation:

```text
117 × 1 = 117
117 × 2 = 234
117 × 3 = 351
...
117 × 9 = 1053
```

The last digit of `1053` is:

```text
3
```

which is equal to `r`.

Therefore, Polycarp needs:

```text
9 shovels
```

## Approach

Try buying:

```text
1, 2, 3, 4, ...
```

shovels.

For every number of shovels, calculate:

```text
total = k × numberOfShovels
```

We only care about the **last digit** of the total price.

The last digit can be obtained using:

```text
total % 10
```

If:

```text
total % 10 == 0
```

or:

```text
total % 10 == r
```

then the payment is possible.

The first number of shovels satisfying this condition is the answer.

## Algorithm

1. Read `k` and `r`.
2. Start with `shovels = 1`.
3. Calculate:
   ```text
   cost = k × shovels
   ```
4. Check:
   ```text
   cost % 10 == 0
   ```
   or:
   ```text
   cost % 10 == r
   ```
5. If true, print `shovels`.
6. Otherwise, increase `shovels`.
7. Repeat until a valid answer is found.

## Example

```text
k = 20
r = 5
```

For one shovel:

```text
20 × 1 = 20
```

Last digit:

```text
0
```

So one shovel is enough.

```text
Output:
1
```

## Key Idea

We don't need to check the complete price.

Only its **last digit** matters.

```text
k × shovels
       ↓
    % 10
       ↓
  0 or r ?
       ↓
     YES
       ↓
    Answer
```

## Complexity

The number of iterations is very small because only the last digit matters.

```text
Time Complexity: O(1)
Space Complexity: O(1)
```

## Concepts Used

- Loops
- Modulo Operator
- Arithmetic
- Implementation
- Last Digit