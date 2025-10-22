# 🧩 Subset II (Unique Subsets)

## 📘 Problem Statement
Given an integer array `arr[]` that **may contain duplicate elements**, return **all possible unique subsets** (the power set).

The solution set **must not contain duplicate subsets**, and the subsets can be returned in **any order**.

---

### 🔹 Example

**Input**
arr = [1, 2, 2]

markdown
Copy code

**Output**
[]
[1]
[1, 2]
[1, 2, 2]
[2]
[2, 2]

yaml
Copy code

---

## 🚀 Approach — Pick / Not Pick (Recursive Backtracking)

We use **recursion** with the **pick / not-pick** technique:

1. **Sort the array** to group duplicates together.
2. Use a recursive helper function:
   - **Pick** the current element → include it in the subset and move to the next index.
   - **Not Pick** the current element → skip all *duplicate values* before making the next recursive call.
3. When we reach the end of the array, store the subset.


🕒 Time & Space Complexity
Complexity	Explanation
Time: O(2ⁿ × n)	Each element can be picked or not picked, and copying subsets takes O(n).
Space: O(2ⁿ × n)	For storing all subsets.
