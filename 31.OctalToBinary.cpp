#include <bits/stdc++.h>
using namespace std;

long OctToBinary(int octal)
{
    int decimal = 0, rem, idx = 0;
    while (octal > 0)
    {
        rem = octal % 10;
        decimal += rem * pow(8, idx);

        idx += 1;
        octal /= 10;
    }

    long bin = 0;
    idx = 0;
    while (decimal > 0)
    {
        int rem = decimal % 2;
        bin += rem * pow(10, idx);

        idx += 1;
        decimal /= 2;
    }

    return bin;
}

int main()
{
    int octal;
    cout << "Give me an Octal (base 8) number to be converted to Binary : ";
    cin >> octal;

    int t = octal;
    while (t > 0)
    {
        if (t % 10 > 7)
        {
            cout << "Not an Octal Number" << endl;
            return 0;
        }

        t /= 10;
    }

    long binary = OctToBinary(octal);
    cout << octal << " in octal = " << binary << " in binary" << endl;
}
