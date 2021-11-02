#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "Factors of number " << n << " are : ";
    for (int factor = 1; factor <= n; factor++)
        if (n % factor == 0)
            cout << factor << " ";
    cout << endl;
    return 0;
}
