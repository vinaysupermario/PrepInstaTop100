#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n)
{
    int temp = n, sum = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, 3);

        temp /= 10;
    }

    if (sum == n)
        return true;
    return false;
}

int main()
{
    int l_n, h_n;
    cout << "Enter the Range : ";
    cin >> l_n >> h_n;

    cout << "Armstrong numbers between " << l_n << " and " << h_n << " are : ";
    for (int i = l_n; i <= h_n; i++)
        if (isArmstrong(i))
            cout << i << " ";
    cout << endl;

    return 0;
}
