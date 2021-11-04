#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of people need to handshake : ";
    cin >> n;

    int hshk = n * (n - 1);
    cout << "Total Handshakes = " << hshk << endl;

    return 0;
}
