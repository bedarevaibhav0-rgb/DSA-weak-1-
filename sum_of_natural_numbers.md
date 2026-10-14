# Question 4: Sum of First N Natural Numbers

## 1. Input
- A single integer `n` of 64-bit signed integer type (`long long` in C++).
- Read from standard input.
- Test Inputs:
  - `5`
  - `1`
  - `0`
  - `10`
  - `100`

## 2. Expected Output
- The sum of the first `n` natural numbers ($1 + 2 + 3 + \dots + n$).
- If $n = 0$, the sum is `0`.
- Test Results:
  - Input: `5` -> Output: `15`
  - Input: `1` -> Output: `1`
  - Input: `0` -> Output: `0`
  - Input: `10` -> Output: `55`
  - Input: `100` -> Output: `5050`

## 3. Logic
- The sum of the first $n$ natural numbers is defined as:
  $$\sum_{i=1}^{n} i = 1 + 2 + 3 + \dots + n$$
- An accumulator variable `sum` is initialized to `0`.
- A `for` loop iterates from `i = 1` up to `i <= n`, adding the current value of `i` to `sum` in each iteration (`sum += i`).
- When `n = 0`, the loop condition `1 <= 0` evaluates to false immediately, correctly resulting in `sum = 0`.
- Using 64-bit integers (`long long`) ensures that the accumulator does not overflow for moderately large values of $n$.

## 4. Algorithm/Steps
1. **Start**
2. Declare variables `n` and `sum` of type `long long`, initializing `sum = 0`.
3. Read the input integer `n` (`cin >> n`).
4. Execute a `for` loop:
   - Initialize loop variable `i = 1`.
   - Condition: `i <= n`.
   - Update: `i++`.
   - Body: `sum += i`.
5. Output the calculated `sum` followed by a newline (`cout << sum << endl;`).
6. Return `0` to indicate successful termination.
7. **End**

## 5. Source Code
```cpp
#include <iostream>
using namespace std;

int main()
{
long long n, sum = 0;
cin >> n;

for (long long i = 1; i <= n; i++)
    sum += i;

cout << sum << endl;

return 0;

}
```
