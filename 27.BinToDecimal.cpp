#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cout << "Enter the Binary Number (0 & 1) only : ";
    cin >> n;

    int idx = 0;
    int num = 0;
    int temp = n;
    
    bool flag = true;
    while (temp > 0)
    {
        if (temp % 10 == 1)
            num += pow(2, idx);
        else if (temp % 10 != 0)
        {
            flag = false;
            break;
        }

        idx += 1;
        temp /= 10;
    }

    if (!flag)
        cout << "Input number is not binary" << endl;
    else
        cout << "Decimal form of " << n << " is " << num << endl;

    return 0;
}

