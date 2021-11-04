#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    discriminant = b * b + (-4 * a * c);

    if (discriminant > 0) 
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "root1 = "
             << fixed << setprecision(0) << root1
             << " and root2 = "
             << fixed << setprecision(2) << root2
             << endl;
    }

    else if (discriminant == 0) 
    {
        root1 = root2 = -b / (2 * a);
        cout << "root1 = root2 = " << fixed << setprecision(2) << root1 << endl;
    }

    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        cout << "root1 = " << fixed << setprecision(2) << realPart << "+"
            << fixed << setprecision(2) << imagPart << "i" << " and root2 = "
            << fixed << setprecision(2) << realPart << "-" 
            << fixed << setprecision(2) << imagPart << "i" << endl;
    }

    return 0;
}
