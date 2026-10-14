# Even or Odd

## 1. Input
- A single integer `n` of 64-bit signed integer type (`long long` in C++).
- Handles values within standard signed 64-bit range ($\approx -9 \times 10^{18}$ to $9 \times 10^{18}$).
- Test Inputs:
  - `8`
  - `7`
  - `0`
  - `-4`
  - `-3`
  - `1000000000000`

## 2. Expected Output
- Prints `"Even"` if the number `n` is divisible by 2.
- Prints `"Odd"` if the number `n` is not divisible by 2.
- Expected Test Results:
  - Input: `8` -> Output: `Even`
  - Input: `7` -> Output: `Odd`
  - Input: `0` -> Output: `Even`
  - Input: `-4` -> Output: `Even`
  - Input: `-3` -> Output: `Odd`
  - Input: `1000000000000` -> Output: `Even`

## 3. Logic
- A number is **Even** if it is divisible by 2 without leaving any remainder.
- In C++, the modulus operator `%` returns the remainder after division:
  - When `n % 2 == 0`, the remainder is zero, meaning `n` is **Even**.
  - This holds true for positive even numbers (e.g., `8 % 2 == 0`), zero (`0 % 2 == 0`), and negative even numbers (e.g., `-4 % 2 == 0`).
  - When `n % 2 != 0`, the remainder is non-zero, meaning `n` is **Odd** (e.g., `7 % 2 == 1` and `-3 % 2 == -1`).
- The use of `long long` data type prevents integer overflow for large input values up to $\pm 10^{18}$.

## 4. Algorithm/Steps
1. **Start**
2. Declare a variable `n` of type `long long`.
3. Read the input value from the user (`cin >> n`).
4. Evaluate condition `if (n % 2 == 0)`:
   - If true, output `"Even"` followed by a newline.
   - Else, output `"Odd"` followed by a newline.
5. Return `0` to indicate successful termination.
6. **End**

## 5. Source Code
```cpp
#include <iostream>
using namespace std;

int main()
{
long long n;
cin >> n;

if (n % 2 == 0)
    cout << "Even" << endl;
else
    cout << "Odd" << endl;

return 0;

}
```
