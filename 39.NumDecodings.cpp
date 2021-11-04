#include <bits/stdc++.h>
using namespace std;

int countDecodings(string str)
{
    int m = str.length();
    if (m == 0)
        return 1;
    
    int digit = str[0] - '0';
    int count = (digit != 0) ? 1 : 0;

    int a = countDecodings(str.substr(1));
    int b = 0;

    if (m > 1 && digit != 0)
    {
        int sdigit = str[1] - '0';
        int k = digit * 10;
        k += sdigit;

        if (k >= 10 && k <= 26)
            b += countDecodings(str.substr(2));
    }

    return a + b;
}


int main()
{
    int n;
    cout << "Give me a number : ";
    cin >> n;

    stringstream ss;
    ss << n;
    string str = ss.str();
    
    cout << "The number of decodings for " << n << " = " << countDecodings(str) << endl;

    return 0;
}



