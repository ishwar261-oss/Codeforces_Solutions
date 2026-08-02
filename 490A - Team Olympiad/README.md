# 490A - Team Olympiad

## Problem

There are students with three different skills:

- `1` → Programmer
- `2` → Mathematician
- `3` → PE Teacher

A team must contain exactly one student from each skill.

Find the maximum number of teams and print the members of each team.

---

## Approach

- Store the indices of students according to their skill.
- The number of teams is the minimum size among the three groups.
- Print one student from each group for every team.

---

## Algorithm

1. Read `n`.
2. Store the index of each student in the corresponding vector.
3. Find the minimum size of the three vectors.
4. Print the number of teams.
5. Print one index from each vector for every team.

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

---

## Concepts Used

- Arrays
- Vectors
- Implementation

---

## Tags

`Implementation` `Arrays` `Vectors`