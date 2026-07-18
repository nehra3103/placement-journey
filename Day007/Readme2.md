# Day 7 - Palindrome Number

## 📌 Problem Statement

Take a positive integer `n` as input.

Print:

- `Palindrome` if the number reads the same forward and backward.
- `Not Palindrome` otherwise.

---

## 🧠 Approach

1. Read the integer `n`.
2. Store the original number in another variable.
3. Reverse the number using a `while` loop.
4. Compare the reversed number with the original number.
5. If both are equal, print `Palindrome`; otherwise, print `Not Palindrome`.

---

## 💻 Example

### Input

```text
121
```

### Output

```text
Palindrome
```

### Input

```text
123
```

### Output

```text
Not Palindrome
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
- Number Reversal
- Integer Division
- Modulus Operator
- Conditional Statements

---

## 🎯 Key Takeaway

This problem demonstrates how reversing a number can be used to determine whether it is a palindrome. It reinforces digit manipulation, an important concept for many coding interview questions.

---

## 🔗 Related Topics

- Loops
- Number Manipulation
- Mathematics
- Palindrome Problems