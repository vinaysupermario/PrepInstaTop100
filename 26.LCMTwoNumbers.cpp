#include <bits/stdc++.h>
using namespace std;

int findLCM(int n1, int n2)
{
    static int fact = min(n1, n2);
    if (fact % n1 == 0 && fact % n2 == 0)
        return fact;

    else
    {
        fact += min(n1, n2);
        findLCM(n1, n2);
    }

    return fact;
}

int main()
{
    int n1, n2;
    cout << "Enter first number : ";
    cin >> n1;

    cout << "Enter second number : ";
    cin >> n2;

    cout << "LCM of " << n1 << " and " << n2 << " is " << findLCM(n1, n2) << endl;

    return 0;
}
