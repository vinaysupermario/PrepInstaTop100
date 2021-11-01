#include <bits/stdc++.h>
using namespace std;

int main()
{
    int first, second;
    cout << "Enter the first number : ";
    cin >> first;

    cout << "Enter the second number : ";
    cin >> second;

    if (first == second)
        cout << "Both are equal";
    else if (first > second)
        cout << first << " is greater than " << second << endl;
    else
        cout << second << " is greater than " << first << endl;


    return 0;
}
