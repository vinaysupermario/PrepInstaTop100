#include <bits/stdc++.h>
using namespace std;

bool findAmicable(int first, int second)
{
    int sum1 = 0, sum2 = 0;
    for(int i=1; i <= first/2; i++)
    {
        if(first%i == 0)
            sum1 = sum1 + i;
    }

    for(int i=1; i <= second/2; i++)
    {
        if(second % i == 0)
            sum2 = sum2 + i;
    }

    if(first == sum2 && second == sum1)
        return true;
    return false;
}

int main()
{
    int first, second;
    cout << "Enter first number : ";
    cin >> first;
    cout << "Enter second number : ";
    cin >> second;

    if(findAmicable(first,second))
        cout << "Friendly Pair(" << first << "," << second << ")";
    else
        cout << "Not a Fiendly Pair";
    cout << endl;

    return 0;
}
