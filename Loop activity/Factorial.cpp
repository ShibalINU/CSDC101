#include <iostream>
using namespace std;

int main()
{
    
    double number, factorial = 1;
        cout << "enter number" << endl;
        cin >> number;
    
    if (number < 0){
        cout << factorial << endl;
    }else if (number <= 1){
        cout << factorial << endl;
    }else {
        for (double counter = number; counter >= 2; counter--){
            factorial = factorial * counter;
        }
        cout << factorial << endl;
    }
    return 0;
}
