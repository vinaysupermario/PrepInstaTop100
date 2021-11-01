#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<" Enter range: ";    
    int lowerLimit, upperLimit;
    cin >> lowerLimit >> upperLimit;
    
    bool sieve[upperLimit + 1];
    fill_n(sieve, upperLimit + 1, true);

    for (int i = 2; i <= upperLimit; i++)
    {
        for (int j = 2; i * j <= upperLimit; j++)
        {
            sieve[i*j] = false;
        }
    }

    cout << "Prime numbers between " << lowerLimit << " and " << upperLimit << " are:" << endl;
    
    //finding prime numbers in the given range
    for(int i = lowerLimit; i <= upperLimit; i++)
        if (sieve[i])
            cout << i << " ";
    cout << endl;

    return 0;
}
