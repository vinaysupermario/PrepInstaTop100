#include <bits/stdc++.h>
using namespace std;

/*
 * Inputs the N and Calculates
 * the sum of first N natural
 * Numbers
 */

int main()
{
    cout << "Enter a Number : ";
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;

    cout << sum << endl;

    return 0;
}
