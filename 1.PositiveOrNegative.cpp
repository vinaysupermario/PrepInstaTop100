#include <bits/stdc++.h>
using namespace std;

/*
 * Input's a Number and checks if 
 * Positive, Negative or Zero
 * And Prints a statement accordingly
 */

int main()
{
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;

    if (n == 0)
        cout << "Number is Zero " << end;
    else if (n > 0)
        cout << "Number is Positive " << endl;
    else
        cout << "Number is Negative " << endl;

    return 0;
}
