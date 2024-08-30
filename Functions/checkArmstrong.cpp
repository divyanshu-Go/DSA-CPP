#include <iostream>
#include <math.h>
using namespace std;

void CheckArmstrong()
{

    int n;
    int arm = 0;

    cout << "Enter No. : " << endl;
    cin >> n;

    int org = n;

    while (n > 0)
    {
        int last = n % 10;
        arm += last * last * last;
        n = n / 10;
    }

    if (org == arm)
    {
        cout << "Armstrong No.";
    }
    else
    {
        cout << "Not an Armstrong No.";
    }
}

int main()
{
    CheckArmstrong();
    return 0;
}
