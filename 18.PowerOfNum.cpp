#include <bits/stdc++.h>
using namespace std;

int main()
{
    double exp, base;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter Exponent: ";
    cin >> exp;
    double res = pow(base, exp);

    cout << base << "^" << exp << " = " ;
    cout << fixed << setprecision(2) << res << endl;

    return 0;
}
