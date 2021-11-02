#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to check : ";
    cin >> n;

    int temp = n;
    int sum = 0;
    while (temp > 0)
    {
        int d = temp % 10;
        sum += d;

        temp /= 10;
    }

    if (n % sum == 0)
        cout << n << " is a Harshad Number" << endl;
    else
        cout << n << " is not a Harshad Number" << endl;

    return 0;
}
