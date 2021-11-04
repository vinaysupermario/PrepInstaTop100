#include <bits/stdc++.h>
using namespace std;

int main()
{
    int month, year;
    cout << "Enter the month : ";
    cin >> month;
    cout << "Enter the year : ";
    cin >> year;

    if (month == 2 && (((year%4 == 0) && (year%100 != 0)) || (year%400 == 0)))
        cout << "Number of days is 29";
    else if (month == 2)
        cout << "Number of days is 28";
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        cout << "Number of days is 31";
    else
        cout << "Number of days is 30";
    cout << endl;


    return 0;
}
