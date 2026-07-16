# Day 9 - Reverse a Number

## 📌 Problem Statement

Take a positive integer `n` as input.

Print the number after reversing its digits.

---

## 🧠 Approach

1. Read the integer `n`.
2. Initialize a variable `reverse` to `0`.
3. Use a `while` loop until `n` becomes `0`.
4. In each iteration:
   - Extract the last digit using `n % 10`.
   - Append it to `reverse`.
   - Remove the last digit using `n /= 10`.
5. Print the reversed number.

---

## 💻 Example

### Input

```text
12345
```

### Output

```text
54321
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
- Number Manipulation

---

## 🎯 Key Takeaway

This problem introduces digit-by-digit processing, a technique frequently used in mathematics and DSA problems.

---

## 🔗 Related Topics

- Loops
- Number Theory
- Mathematics
- Digit Manipulation