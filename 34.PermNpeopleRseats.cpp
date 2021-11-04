#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
        res *= i;

    return res;
}

int main()
{
    int n, r;
    cout << "Enter number of people to be seated : ";
    cin >> n;

    cout << "Enter number of total seats : ";
    cin >> r;

    if (n > r)
    {
        cout << "Oops, not enough seats available";
        return 0;
    }

    int perms = fact(r);
    perms /= fact(r - n);

    cout << "Ways to arrange " << n << " people on " << r << " seats = " << perms << endl;

    return 0;
}
