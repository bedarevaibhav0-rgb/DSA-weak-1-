# Question 5: Reverse a Number

## 1. Input
- A single integer `n` of 32-bit signed integer type (`int` in C++).
- Read from standard input.
- Test Inputs:
  - `12345`
  - `1200`
  - `7`
  - `0`
  - `-123`
  - `-2147483648`

## 2. Expected Output
- The integer with its decimal digits reversed.
- Reversing numbers with trailing zeros eliminates leading zeros in the result (e.g., `1200` becomes `21`).
- Negative numbers preserve their negative sign (e.g., `-123` becomes `-321`).
- Test Results:
  - Input: `12345` -> Output: `54321`
  - Input: `1200` -> Output: `21`
  - Input: `7` -> Output: `7`
  - Input: `0` -> Output: `0`
  - Input: `-123` -> Output: `-321`
  - Input: `-2147483648` -> Output: `-8463847412`

## 3. Logic
- The last digit of integer `n` is obtained using the modulus operation: `digit = n % 10`.
- The reversed number is formed by shifting the current `reverse` value one decimal place to the left and adding the new digit:
  $$\text{reverse} = \text{reverse} \times 10 + \text{digit}$$
- The last digit is removed from `n` by integer division: `n = n / 10`.
- The loop continues until all digits have been processed (`n == 0`).
- When $n = 0$, the condition `n != 0` is immediately false, correctly resulting in `0`.
- Negative numbers in C++ yield negative remainders (e.g., `-123 % 10 = -3`), ensuring that negative inputs are reversed with their negative sign intact.
- Declaring `reverse` as `long long` safely handles 32-bit integer reversals that exceed 32-bit signed bounds (e.g., `-2147483648` reverses to `-8463847412`).

## 4. Algorithm/Steps
1. **Start**
2. Declare integer `n` and 64-bit integer `reverse = 0`.
3. Read `n` from standard input (`cin >> n`).
4. While `n != 0`:
   - Compute `digit = n % 10`.
   - Update `reverse = reverse * 10 + digit`.
   - Update `n = n / 10`.
5. Output `reverse` followed by a newline (`cout << reverse << endl;`).
6. Return `0` to indicate successful termination.
7. **End**

## 5. Source Code
```cpp
#include <iostream>
using namespace std;

int main()
{
int n;
cin >> n;

long long reverse = 0;

while (n != 0)
{
    int digit = n % 10;
    reverse = reverse * 10 + digit;
    n = n / 10;
}

cout << reverse << endl;

return 0;

}
```
