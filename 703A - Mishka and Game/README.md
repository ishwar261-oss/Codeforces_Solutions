# 703A - Mishka and Game

## Problem

Mishka and Chris play several rounds of a game.

For each round:

- If Mishka's score is greater, Mishka wins the round.
- If Chris's score is greater, Chris wins the round.
- If both scores are equal, no one wins the round.

After all rounds, print:

- `Mishka` if Mishka wins more rounds.
- `Chris` if Chris wins more rounds.
- `Friendship is magic!^^` if both win the same number of rounds.

---

## Approach

- Count the number of rounds won by Mishka and Chris.
- Ignore tied rounds.
- Compare the final counts and print the winner.

---

## Algorithm

1. Read `n`.
2. Initialize two counters:
   - `mishka = 0`
   - `chris = 0`
3. For each round:
   - Read both scores.
   - Update the corresponding counter.
4. Compare the counters.
5. Print the result.

---

## Example

### Input

```
3
3 5
2 1
4 4
```

### Output

```
Friendship is magic!^^
```

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Implementation
- Loops
- Conditional Statements

---

## Tags

`Implementation` `Math`