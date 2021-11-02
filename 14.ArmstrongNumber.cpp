#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int temp = n;
    int sum = 0;

    while (temp > 0)
    {
        int d = temp % 10;
        sum += pow(d, 3);

        temp /= 10;
    }

    if (sum == n)
        cout << n << " is an Armstrong Number " << endl;
    else
        cout << n << " is not an Armstrong Number " << endl;

    return 0;
}
