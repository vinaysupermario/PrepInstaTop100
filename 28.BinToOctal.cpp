#include <bits/stdc++.h>
using namespace std;

int toOctal(long n)
{
    int decimal = 0, idx = 0;
    while (n > 0)
    {
        if (n % 10 == 1)
            decimal += pow(2, idx);

        idx += 1;
        n /= 10;
    }

    int octal = 0, rem, i = 1;
    while (decimal > 0)
    {
        rem = decimal % 8;
        octal += rem * i;
        decimal /= 8;
        i *= 10;
    }
    
    return octal;
}

int main()
{
    long n;
    cout << "Give me a Binary Number (0's & 1's only) : ";
    cin >> n;

    long t = n;
    while (t > 0)
    {
        if (t % 10 > 1)
        {
            cout << "Not a Binary Number" << endl;
            return 0;
        }
        t /= 10;
    }

    int octal = toOctal(n);
    cout << n << " in binary = " << octal << " in octal" << endl;

    return 0;
}
