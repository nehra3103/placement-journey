# Day 10 - Check Prime Number

## 📌 Problem Statement

Take an integer `n` as input.

Print:

- `Prime` if the number is prime.
- `Not Prime` otherwise.

A prime number has exactly two factors: `1` and itself.

---

## 🧠 Approach

1. Read the integer `n`.
2. If `n` is less than `2`, print `Not Prime`.
3. Use a loop from `2` to `n - 1`.
4. If any number divides `n` completely, it is not prime.
5. Otherwise, print `Prime`.

---

## 💻 Example

### Input

```text
7
```

### Output

```text
Prime
```

---

## ⏱️ Time Complexity

**O(n)**

> *(We'll optimize this to **O(√n)** in the future.)*

---

## 💾 Space Complexity

**O(1)**

---

## 📚 Concepts Learned

- `for` loop
- Conditional Statements
- Boolean Variables
- Divisibility Check

---

## 🎯 Key Takeaway

Prime number checking is a classic interview problem and builds the foundation for many number theory concepts.

---

## 🔗 Related Topics

- Loops
- Mathematics
- Number Theory
- Prime Numbers

This is the end of day 6