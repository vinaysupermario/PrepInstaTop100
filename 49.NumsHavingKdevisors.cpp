#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the range of numbers : ";
    cin >> n;

    int k;
    cout << "Enter exact number of divisors : ";
    cin >> k;

    int total = 0;
    for (int i = 0; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == k)
        {
            total++;
            cout << i << " ";
        }
    }
    cout << "\n" << total << endl;

    return 0;
}


