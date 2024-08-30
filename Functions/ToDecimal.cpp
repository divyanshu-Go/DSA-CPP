#include <iostream>
#include <cmath>
using namespace std;

int ToDecimal()
{

    string fromWhich;
    string n;
    int code;
    int ans = 0;
    int mul = 1;
    cout << "From Which (Binary:B, Octal:O, HexaDecimal:H) : " << endl;
    cin >> fromWhich;
    cout << "Enter Value : " << endl;
    cin >> n;

    if (fromWhich == "b" || fromWhich == "B")
    {
        code = 2;
    }
    else if (fromWhich == "O" || fromWhich == "o")
    {
        code = 8;
    }
    else if (fromWhich == "H" || fromWhich == "h")
    {
        code = 16;
    }
    else
    {
        code = 2;
    }

    int s = n.size();

    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += mul * (n[i] - 'A' + 10);
            mul *= code;
        }
        else
        {
            ans += mul * (n[i] - '0');
            mul *= code;
        }
    }

    cout << ans << endl;
}

int main()
{
    ToDecimal();

    return 0;
}