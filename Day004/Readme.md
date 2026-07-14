# Day 5 - Leap Year

## 📌 Problem Statement

Take an integer `year` as input.

Print:

- `Leap Year` if the year is a leap year.
- `Not a Leap Year` otherwise.

### Rules

A year is a leap year if:

- It is divisible by **400**, OR
- It is divisible by **4** but **not** divisible by **100**.

---

## 🧠 Approach

1. Read the input year.
2. Check if the year is divisible by `400`.
3. If not, check whether it is divisible by `4` but not by `100`.
4. Print the appropriate result.

---

## 💻 Example

### Input

```text
2024
```

### Output

```text
Leap Year
```

---

## ⏱️ Time Complexity

**O(1)**

---

## 💾 Space Complexity

**O(1)**

---

## 📚 Concepts Learned

- Conditional Statements (`if`, `else if`, `else`)
- Logical Operators (`&&`, `||`)
- Modulus Operator (`%`)

## 🎯 Key Takeaway

Understanding logical conditions is essential because similar logic is frequently used in programming interviews.