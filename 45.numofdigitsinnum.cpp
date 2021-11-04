#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Give me a number : ";
    cin >> n;

    int t = n, count = 0;
    while (t > 0)
    {
        count++;
        t /= 10;
    }

    cout << n << " has " << count << " digits" << endl;

    return 0;
}
