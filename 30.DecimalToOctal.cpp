#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Give me a decimal to be converted to octal : ";
    cin >> n;

    int t = n;
    int octal = 0, rem, i = 1;
    while (t > 0)
    {
        rem = t % 8;
        octal += rem * i;
        i *= 10;
        t /= 8;
    }

    cout << n << " in decimal = " << octal << " in octal" << endl;
    return 0;
}
