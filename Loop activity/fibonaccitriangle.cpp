#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int first = 0, second = 1, next;

    for (int i = 1; i <= rows; i++) {         
        for (int j = 1; j <= i; j++) {    
            cout << first << " ";          
            next = first + second;           
            first = second;                  
            second = next;
        }
        cout << endl;                      
    }

    return 0;
}

int main()
{
    int i, first = 0, second = 1, next, n = 10;
    
    for (int j = 1; j <= n; j++) {        
            cout << first << " ";          
            next = first + second;           
            first = second;                 
            second = next;
        }
    return 0;
}
