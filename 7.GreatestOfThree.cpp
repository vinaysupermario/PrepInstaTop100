#include <bits/stdc++.h>
using namespace std;

int main()
{
    int first, second, third;
    cout << "Enter the first number : ";
    cin >> first;
    cout << "Enter the second number : ";
    cin >> second;
    cout << "Enter the third number : ";
    cin >> third;

    if (first > second && first > third)
        cout << first << " is the greatest " << endl;
    else if (second > first && second > third)
        cout << second << " is the greatest " << endl;
    else
        cout << third << " is the greatest " << endl;

    return 0;
}
