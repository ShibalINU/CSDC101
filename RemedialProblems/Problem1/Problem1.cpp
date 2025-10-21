#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "ENTER n: ";
    cin >> n;

        for (int i = 1; i <= n; i++){   //outer loop for rows       
            for (int j = 1; j <= n; j++) {    //inner loop for columns 

                cout << i * j; //multiply i and j and print the result
                if (i * j < 10){ //if result is single digit it will only take 1 space so we add 3 spaces to align it to the next number
                    cout << "   "; //three spaces
                }else if (i * j < 100){ //if result is double digit it will take 2 spaces so we add 2 spaces to align it to the next number
                    cout << "  "; //2 spaces
                }else{ //if result is triple digit it will take 3 spaces so we add 1 space to align it to the next number
                    cout << " "; //1 space
                }         
            }
            cout << endl; //new line after each row
        }

        //Note that the number of rows and columns is determined by the user input n, since the inner loop is dependent on the value of n, this also determine the number of terms to be multipliad in the multiplication table.
        //the spacing is adjusted based on the number of digits in the product of i and j.
        //This ensures that the multiplication table is neatly aligned.
    return 0;
}
