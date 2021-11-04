#include <bits/stdc++.h>
using namespace std;

int main()
{
    int octal;
    cout << "Give me an Octal (base 8) number to be converted to Decimal : ";
    cin >> octal;

    int decimal = 0, rem, idx = 0;
    int t = octal;
    while (t > 0)
    {
        rem = t % 10;
        decimal += rem * pow(8, idx);

        idx += 1;
        t /= 10;
    }
    
    cout << octal << " in octal = " << decimal << " in decimal " << endl;

    return 0;
}
