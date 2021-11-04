#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool sieve[102];
    memset(sieve, 1, sizeof(sieve));
    sieve[0] = sieve[1] = false;

    for (int i = 2; i <= 101; i++)
    {
        if (sieve[i])
        {
            for (int j = 2; i * j <= 101; j++)
            {
                sieve[i * j] = false;
            }
        }
    }

    cout << "Prime numbers between 1 and 100 are : " << endl;
    for (int i = 2; i <= 100; i++)
    {
        if (sieve[i])
            cout << i << " ";
    }
    cout << endl;

    return 0;
}
