#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter how many fibonacci numbers U need : ";
    cin >> n;

    cout << "First " << n << " terms of Fibonacci series are : " << endl;
    int first = 0, second = 1;
    while (n--)
    {
        cout << first << " ";
        int third = first + second;
        first = second;
        second = third;
    }
    cout << endl;

    return 0;
}
