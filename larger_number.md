# Question 2: Find the Larger Number

## 1. Input
- Two integers `a` and `b` of 64-bit signed integer type (`long long` in C++).
- Space-separated values read from standard input.
- Test Inputs:
  - `5 23`
  - `10 4`
  - `-2 -8`
  - `7 7`
  - `0 -3`

## 2. Expected Output
- If `a > b`, prints the larger number `a`.
- If `b > a`, prints the larger number `b`.
- If `a` and `b` are equal, prints `"Both numbers are equal"`.
- Test Results:
  - Input: `5 23` -> Output: `23`
  - Input: `10 4` -> Output: `10`
  - Input: `-2 -8` -> Output: `-2`
  - Input: `7 7` -> Output: `Both numbers are equal`
  - Input: `0 -3` -> Output: `0`

## 3. Logic
- The program compares two 64-bit integers `a` and `b` using conditional statements (`if`, `else if`, `else`).
- Relational operators determine the relative order:
  - If `a > b`, `a` is strictly greater than `b`, so `a` is output.
  - If `b > a`, `b` is strictly greater than `a`, so `b` is output.
  - If neither condition holds, then `a == b`, and the program outputs `"Both numbers are equal"`.
- Negative numbers and zero are evaluated correctly according to standard signed integer comparison rules.
- The use of `long long` ensures safe comparison for 64-bit integer values without overflow.

## 4. Algorithm/Steps
1. **Start**
2. Declare two variables `a` and `b` of type `long long`.
3. Read the two input numbers from standard input (`cin >> a >> b`).
4. Evaluate condition `if (a > b)`:
   - If true, output `a` followed by a newline.
5. Else evaluate condition `else if (b > a)`:
   - If true, output `b` followed by a newline.
6. Else:
   - Output `"Both numbers are equal"` followed by a newline.
7. Return `0` to indicate successful termination.
8. **End**

## 5. Source Code
```cpp
#include <iostream>
using namespace std;

int main()
{
long long a, b;
cin >> a >> b;

if (a > b)
    cout << a << endl;
else if (b > a)
    cout << b << endl;
else
    cout << "Both numbers are equal" << endl;

return 0;

}
```
