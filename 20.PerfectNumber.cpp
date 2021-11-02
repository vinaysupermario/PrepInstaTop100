#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;

    if (sum == n)
        cout << n << " is a Perfect NUmber" << endl;
    else
        cout << n << " is not a Perfect Number" << endl;

    return 0;
}
