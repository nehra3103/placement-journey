# Day 7 - Fibonacci Series (First N Terms)

## 📌 Problem Statement

Take an integer `n` as input.

Print the first `n` terms of the Fibonacci series.

The Fibonacci series starts as:

0 1 1 2 3 5 8 13 ...

Each number is the sum of the previous two numbers.

---

## 🧠 Approach

1. Read the integer `n`.
2. Initialize the first two Fibonacci numbers as `0` and `1`.
3. Use a loop to print the first `n` terms.
4. In each iteration:
   - Print the current Fibonacci number.
   - Calculate the next Fibonacci number as the sum of the previous two.
   - Update the previous and current numbers.

---

## 💻 Example

### Input

```text
7
```

### Output

```text
0 1 1 2 3 5 8
```

---

## ⏱️ Time Complexity

**O(n)**

---

## 💾 Space Complexity

**O(1)**

---

## 📚 Concepts Learned

- `for` loop
- Variables
- Sequence Generation
- Updating Multiple Variables

---

## 🎯 Key Takeaway

The Fibonacci sequence is one of the most common introductory programming problems. It helps build a strong understanding of loops, variable updates, and mathematical sequences.

---

## 🔗 Related Topics

- Loops
- Number Series
- Mathematics
- Dynamic Programming (Advanced)