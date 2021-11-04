#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cout << "Give me the Coordinates of point (x, y) : ";
    cin >> x >> y;

    //checking for quadrants and axis
    if (x == 0)
        cout << x << "," << y << " lies on y axis";
    else if (y == 0)
        cout << x << "," << y << " lies on x axis";
    else if (x > 0 && y > 0)
        cout << x << "," << y << " lies in 1st quadrant";
    else if (x < 0 && y > 0)
        cout << x << "," << y << " lies in 2nd quadrant";
    else if (x < 0 && y < 0)
        cout << x <<"," << y <<" lies in 3rd quadrant";
    else if (x > 0 && y < 0)
        cout << x << "," << y << " lies in 4th quadrant";
    else
        cout << x << "," << y << " lies on the origin";
    cout << endl;

    return 0;
}
