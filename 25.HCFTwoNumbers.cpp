#include <bits/stdc++.h>
using namespace std;

int findGCD(int n1, int n2)
{
    if (n2 > n1)
        return findGCD(n2, n1);

    if (n2 == 0)
        return n1;
    else
        return findGCD(n1 - n2, n2);
}


int main()
{
    int n1, n2;
    cout << "Enter number one : ";
    cin >> n1;
    cout << "Enter number two : ";
    cin >> n2;

    cout << "HCF of numbers " << n1 << " and " << n2 << " is : " << findGCD(n1, n2) << endl;
    return 0;
}
