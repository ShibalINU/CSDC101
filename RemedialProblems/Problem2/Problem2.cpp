#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0){ //program end if the inputted number is <=0
        cout << "Please enter a positive integer." << endl;
        return 0;
    }
    if (n % 2 == 0) { //if n is even it will output a square pattern
        cout << "number detected. Printing ______ pattern:\n";
            for (int i = 0; i < n; i++){ //outer loop for rows
                for (int j = 0; j < n; j++){ //inner loop for columns
                cout << "* ";
            }
            cout << endl;
        }                                                                      
    }else{ //if n is odd it will output a right angled triangle pattern
        cout << "number detected. Printing ______ pattern:\n";
        for (int i = 1; i <= n; i++){ //outer loop for rows
            for (int j = 1; j <= i; j++){ //inner loop for columns
                cout << "* ";
            }
            cout << endl;
        }                                                  
    }

    return 0;
}
