#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the lower limit : ";
    int l_n;
    cin >> l_n;

    cout << "Enter the upper limit : ";
    int h_n;
    cin >> h_n;

    int sum = 0;
    for (int i = l_n; i <= h_n; i++)
        sum += i;

    cout << sum << endl;

    return 0;
}
