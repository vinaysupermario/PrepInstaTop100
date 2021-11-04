#include <bits/stdc++.h>
using namespace std;

int findGCD(int num1, int num2)
{
    if (num1 < num2)
        return findGCD(num2, num1);

    if (num2 == 0)
        return num1;

    else
        return findGCD(num2, num1 % num2);
}

pair<int, int> addFraction(pair<int,int> p1, pair<int, int> p2)
{
    int den1 = p1.second;
    int den2 = p2.second;

    p1.first *= den2;
    p1.second *= den2;

    p2.first *= den1;
    p2.second *= den1;

    pair<int, int> ans;
    ans.first = p1.first + p2.first;
    ans.second = den1 * den2;
    int gcd = findGCD(ans.first, ans.second);

    while (ans.first % gcd == 0 && gcd != 1)
    {
        ans.first /= gcd;
        ans.second /= gcd;

        gcd = findGCD(ans.first, ans.second);
    }

    return ans;
}


int main()
{
    // 3/4
    pair<int,int> p1, p2;
    cout << "Enter the first Fraction Number (num, den) : ";
    cin >> p1.first >> p1.second;

    // 1/6
    cout << "Enter the second Fraction Number (num, den) : ";
    cin >> p2.first >> p2.second;

    pair<int, int> ans = addFraction(p1, p2);

    cout << p1.first << "/" << p1.second << " + " << p2.first << "/" << p2.second << " = " << ans.first << "/" << ans.second << endl;

    return 0;
}


