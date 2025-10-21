#include <iostream>
using namespace std;

int main(){
    int n, factorial = 1, i;
    cout << "Enter integer: ";
    cin >> n;

    for(i = 1; i <= n; i++){
        factorial = factorial * i;
    }
    cout << "Factorial of " << n << " is " << factorial << endl;

    return 0;
