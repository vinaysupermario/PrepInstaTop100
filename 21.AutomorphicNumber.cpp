#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive number : ";
    cin >> n;

    int sq = pow(n, 2);
    int temp = n;

    bool isAutomorphic = true;
    while (temp > 0)
    {
        if (temp % 10 != sq % 10)
        {
            isAutomorphic = false;
            break;
        }
        temp /= 10;
        sq /= 10;
    }

    if (isAutomorphic)
        cout << n << " is an Automorphic Number" << endl;
    else
        cout << n << " is not an Automorphic Number" << endl;

    return 0;
}
