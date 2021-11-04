#include <bits/stdc++.h>
#include <string.h>
using namespace std;

void numToWords(string num)
{
    int l = strlen(num);
    if (l == 0)
    {
        cout << "String is Empty";
        return;
    }

    string ones_digit = {"Zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string tens_digit = {"", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", 
        "seventeen", "eighteen", "nineteen"};
    string multiple_of_ten = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty"
        "ninety"};

    string power_of_ten = {"hundred", "thousand"};
    cout << num << ": " << endl;

    if (l == 1)
    {
        cout << ones_digit[num[0] - '0'];
        return;
    }

    int x = 0;
    while (x < strlen(num))
    {
        if (length_of_string >= 3)
        {
            if (num[x] - 48 != 0)
            {
                cout << ones_digits[num[x] - 48] << endl;
                cout << power_of_ten[l - 3] << endl;
                l--;
            }
        }
        else
        {
            if (num[x] - 48 == 1)
            {
                sum = (num[x] - 48 + num[x] - 48);
                cout << tens_digits[sum];
                return;
            }
            else if (num[x] - 48 == 2 && num[x + 1] - 48 == 0)
            {
                cout << "twenty";
                return;
            }
            else
            {
                int i = num[x] - 48;
                if (i > 0)
                    cout << multiple_of_ten[i] << " ";
                
                x += 1;
                if (num[x] - 48 != 0)
                {
                    cout << ones_digits[num[x] - 48];
                }
            }
        }
        x++;
    }
}

int main()
{
    string num;
    cout << "Enter a number (maxLength = 4) : ";
    cin >> num;

    if (strlen(num) > 4)
    {
        cout << "String not of supported length";
        return 0;
    }

    numToWords(num);
    
    return 0;
}
