#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cout << "Give me a character : ";
    cin >> c;

    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        cout << c << " is an alphabet" << endl;
    else
        cout << c << " is not an alphabet " << endl;


    return 0;
}
