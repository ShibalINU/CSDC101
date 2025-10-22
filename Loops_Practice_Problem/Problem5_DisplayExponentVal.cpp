#include <iostream>
using namespace std;

int main(){
    int base, nextbase, exponent, i, result = 1;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    for(i = 1; i <= exponent; i++){
        result = result * base;
        nextbase = result;
        cout << nextbase << " x " << base << " = " << result << endl;
    }
    cout << base << " ^ " << exponent << " = " << result << endl;
   
return 0;
}
