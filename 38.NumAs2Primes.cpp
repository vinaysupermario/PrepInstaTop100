#include <bits/stdc++.h>
using namespace std;
#define MAX 10002

bool sieve[MAX];

int main()
{
    memset(sieve, 1, sizeof(sieve));
    for (int i = 2; i <= MAX; i++)
    {
        if (sieve[i])
        {
            for (int j = 2; i * j <= MAX; j++)
            {
                sieve[i * j] = false;
            }
        }
    }


    int n;
    cout << "Give me a number : ";
    cin >> n;

    bool flag = false;
    for (int i = 2; i <= n / 2; i++)
    {
        if (sieve[i] && sieve[n - i])
        {
            cout << n << " = " << i << " + " << n - i << endl;
            flag = true;
        }
    }
            
    if (!flag)
        cout << "cannot express " << n << " as a sum of two prime numbers";
    
    return 0;
}
