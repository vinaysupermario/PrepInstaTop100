#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the number  : ";
    int n;
    cin >> n;

    int sum = n * (n + 1);
    sum /= 2;

    cout << sum << endl;
    return 0;
}
