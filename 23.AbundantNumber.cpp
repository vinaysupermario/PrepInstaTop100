#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to check : ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;

    if (sum > n)
        cout << n << " is an Abundant Number" << endl;
    else
        cout << n << " is not an Abundant Number" << endl;

    return 0;
}
