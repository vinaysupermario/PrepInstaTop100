#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;

    cout << "Factorial of number " << n << " is " << fact << endl;


    return 0;
}
