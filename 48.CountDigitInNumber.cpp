#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Give me a number : ";
    cin >> n;

    int k;
    cout << "Give me a digit to count : ";
    cin >> k;

    int t = n;
    int count = 0;
    while (t > 0)
    {
        if (t % 10 == k)
            count++;
        t /= 10;
    }

    cout << k << " occurs in " << n << ", " << count << " times" << endl;

    return 0;
}

