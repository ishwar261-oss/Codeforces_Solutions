# 230A - Dragons

## Problem

Kirito has an initial strength `s`.

There are `n` dragons. Each dragon has:
- Strength `xi`
- Bonus `yi`

Kirito can defeat a dragon only if:

```
s > xi
```

After defeating the dragon, his strength becomes:

```
s = s + yi
```

Determine whether Kirito can defeat all dragons.

---

## Approach

- Store every dragon as a pair `(strength, bonus)`.
- Sort the dragons by their strength.
- Fight the weakest dragon first.
- If Kirito's strength is not greater than the current dragon's strength, print **NO**.
- Otherwise, defeat the dragon and increase Kirito's strength.
- If all dragons are defeated, print **YES**.

---

## Algorithm

1. Read `s` and `n`.
2. Store all dragons.
3. Sort them by strength.
4. Traverse the sorted list:
   - If `s <= dragonStrength`, print `NO`.
   - Else, `s += bonus`.
5. If all dragons are defeated, print `YES`.

---

## Example

### Input

```
2 2
1 99
100 0
```

### Output

```
YES
```

### Explanation

- Defeat dragon with strength `1` → strength becomes `101`.
- Defeat dragon with strength `100`.
- All dragons are defeated.

---

## Complexity

- **Time Complexity:** `O(n log n)` (sorting)
- **Space Complexity:** `O(n)`

---

## Concepts Used

- Greedy
- Sorting
- Pairs

---

## Tags

`Greedy` `Sorting` `Implementation`