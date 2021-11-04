#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Give me a number : ";
    cin >> n;

    int ans = 0, rem, idx = 0;
    int t = n;
    while (t > 0)
    {
        rem = t % 10;
        if (rem == 0)
        {
            rem = 1;
        }
        ans += rem * pow(10, idx);

        idx += 1;
        t /= 10;
    }

    cout << "Before Replacement = " << n << " : " << "After Replacement = " << ans << endl;

    return 0;
}
