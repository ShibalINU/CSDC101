#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        digit = num % 10;// extract the last digit using the modulo function
        rev = rev * 10 + digit;//add the last digit to the resverse number
        num = num / 10;//remove the last digit
    }

    cout << "Reversed: " << rev;
    return 0;
}
