# Day 9 - Sum of Digits

## 📌 Problem Statement

Take a positive integer `n` as input.

Print the sum of all its digits.

---

## 🧠 Approach

1. Read the integer `n`.
2. Initialize a variable `sum` to `0`.
3. Use a `while` loop until `n` becomes `0`.
4. In each iteration:
   - Extract the last digit using `n % 10`.
   - Add the digit to `sum`.
   - Remove the last digit using `n /= 10`.
5. Print the value of `sum`.

---

## 💻 Example

### Input

```text
1234
```

### Output

```text
10
```

### Explanation

```text
1 + 2 + 3 + 4 = 10
```

---

## ⏱️ Time Complexity

**O(d)**

where `d` is the number of digits.

---

## 💾 Space Complexity

**O(1)**

---

## 📚 Concepts Learned

- `while` loop
- Modulus Operator (`%`)
- Integer Division (`/`)
- Digit Manipulation
- Accumulator Variable

---

## 🎯 Key Takeaway

This problem teaches how to process a number one digit at a time using arithmetic operators. This technique is widely used in number-based programming problems.

---

## 🔗 Related Topics

- Loops
- Mathematics
- Number Theory
- Digit Manipulation