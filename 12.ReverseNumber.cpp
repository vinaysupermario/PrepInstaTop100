#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int rev = 0, rem;
    while (n > 0)
    {
        rem = n % 10;
        rev *= 10;
        rev += rem;

        n /= 10;
    }

    cout << "Reversed Number is " << rev << endl;

    return 0;
}
