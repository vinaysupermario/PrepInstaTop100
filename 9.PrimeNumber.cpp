#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number to check if prime : ";
    cin >> n;

    bool isPrime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << n << " is a prime number " << endl;
    else
        cout << n << " is not a prime number " << endl;

    return 0;
}
        
       
