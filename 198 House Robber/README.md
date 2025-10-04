# House Robber Problem

## Problem Statement
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed.  
The only constraint stopping you from robbing each of them is that **adjacent houses have security systems connected**, and **it will automatically contact the police if two adjacent houses are broken into on the same night**.  

Given an integer array `nums` representing the amount of money of each house, **return the maximum amount of money you can rob tonight without alerting the police**.

---

## Example

**Input:** 
nums = [2,7,9,3,1]

**Output:** 
12
**Explanation:**  
- Rob house 1 (money = 2)  
- Rob house 3 (money = 9)  
- Rob house 5 (money = 1)  

Total amount = 2 + 9 + 1 = 12

---

## Approach

We can solve this problem using **recursion, dynamic programming, or iterative approach**.  

**Recursive Approach:**  
- At each house, we have two options:  
  1. **Rob the current house** → skip the next house and move to `i + 2`.  
  2. **Skip the current house** → move to `i + 1`.  
- Take the **maximum** of both options.  
