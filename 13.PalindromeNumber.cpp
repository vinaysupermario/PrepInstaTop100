#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int temp = n;
    int rev = 0, rem;
    while (temp > 0)
    {
        rem = temp % 10;
        rev *= 10;
        rev += rem;

        temp /= 10;
    }

    if (n == rev)
        cout << n << " is Palindrome number" << endl;
    else
        cout << n << " is not Palindrome number" << endl;

    return 0;
}
