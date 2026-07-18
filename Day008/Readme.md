# Day 13 - Armstrong Number

## 📌 Problem Statement

Take a positive integer `n` as input.

Print:

- `Armstrong` if the number is an Armstrong number.
- `Not Armstrong` otherwise.

For this problem, assume `n` is a **3-digit number**.

An Armstrong number is a number that is equal to the sum of the cubes of its digits.

---

## 🧠 Approach

1. Read the integer `n`.
2. Store the original number in another variable.
3. Initialize a variable `sum` to `0`.
4. Use a `while` loop until `n` becomes `0`.
5. In each iteration:
   - Extract the last digit using `n % 10`.
   - Add the cube of the digit to `sum`.
   - Remove the last digit using `n /= 10`.
6. Compare `sum` with the original number.
7. If they are equal, print `Armstrong`; otherwise, print `Not Armstrong`.

---

## 💻 Example

### Input

```text
153
```

### Output

```text
Armstrong
```

### Explanation

```text
1³ + 5³ + 3³ = 1 + 125 + 27 = 153
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
- Mathematical Computation

---

## 🎯 Key Takeaway

This problem strengthens your understanding of digit manipulation and demonstrates how mathematical operations can be applied to each digit of a number.

---

## 🔗 Related Topics

- Loops
- Mathematics
- Number Theory
- Digit Manipulation