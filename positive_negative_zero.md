# Question 3: Positive, Negative or Zero

## 1. Input
- A single integer `n` of 64-bit signed integer type (`long long` in C++).
- Read from standard input.
- Test Inputs:
  - `7`
  - `-7`
  - `0`
  - `-100`
  - `999999999999`

## 2. Expected Output
- If `n > 0`, prints `"Positive"`.
- If `n < 0`, prints `"Negative"`.
- If `n == 0`, prints `"Zero"`.
- Test Results:
  - Input: `7` -> Output: `Positive`
  - Input: `-7` -> Output: `Negative`
  - Input: `0` -> Output: `Zero`
  - Input: `-100` -> Output: `Negative`
  - Input: `999999999999` -> Output: `Positive`

## 3. Logic
- Every real integer is classified into one of three mutually exclusive categories:
  - **Positive**: Any number strictly greater than 0 (`n > 0`).
  - **Negative**: Any number strictly less than 0 (`n < 0`).
  - **Zero**: The neutral number neither positive nor negative (`n == 0`).
- The program evaluates these conditions sequentially using an `if - else if - else` control flow ladder:
  - `if (n > 0)`: checks for positive values.
  - `else if (n < 0)`: checks for negative values.
  - `else`: covers the remaining case where $n = 0$.
- The `long long` data type handles numbers up to $\approx \pm 9 \times 10^{18}$, preventing integer overflow on large inputs like `999999999999`.

## 4. Algorithm/Steps
1. **Start**
2. Declare variable `n` of type `long long`.
3. Read the input integer (`cin >> n`).
4. Evaluate condition `if (n > 0)`:
   - If true, output `"Positive"` followed by a newline.
5. Else evaluate condition `else if (n < 0)`:
   - If true, output `"Negative"` followed by a newline.
6. Else:
   - Output `"Zero"` followed by a newline.
7. Return `0` to indicate successful termination.
8. **End**

## 5. Source Code
```cpp
#include <iostream>
using namespace std;

int main()
{
long long n;
cin >> n;

if (n > 0)
    cout << "Positive" << endl;
else if (n < 0)
    cout << "Negative" << endl;
else
    cout << "Zero" << endl;

return 0;

}
```
