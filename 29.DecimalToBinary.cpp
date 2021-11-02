#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Give me a decimal number to convert to binary : ";
    cin >> n;

    int t = n;
    long bin = 0, rem, i = 1;
    while (t > 0)
    {
        rem = t % 2;
        bin += rem * i;
        i *= 10;
        t /= 2;
    }

    cout << n << " in decimal = " << bin << " in binary" << endl;

    return 0;
}
