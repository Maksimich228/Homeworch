#include <iostream>
#include <string>
using namespace std;

bool IsKPeriodic(const string& str, int K)
{
    int lengh = str.length();
    if (lengh % K != 0)
    {
        return false;
    }
    for (int i = 0; i < lengh; ++i)
    {
        if (str[i] != str[i % K])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string input;
    int K;
    cout << "Enter the line: ";
    cin >> input;

    cout << "Enter K: ";
    cin >> K;
    if (K < 0)
    {
        cout << "false" << endl;
    }
    else
    {

        if (IsKPeriodic(input, K))
        {
            cout << "The string is " << " - periodic." << endl;
        }
        else
        {
            cout << "The string is not " << " - periodic." << endl;
        }
    }
    return 0;
}