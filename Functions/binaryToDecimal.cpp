#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1;  // 2^0

    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }

    return decimal;
}

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);
    cout << "The decimal equivalent is: " << decimal << endl;

    return 0;
}
