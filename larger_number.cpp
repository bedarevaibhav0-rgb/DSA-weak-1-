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
