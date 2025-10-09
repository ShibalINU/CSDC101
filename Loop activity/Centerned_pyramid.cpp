#include <iostream>
using namespace std;

int main()
{
    
    int n = 9;
    
//pyramid
    for(int i = 1; i <= n; i++){
        for (int j = i; j <= n; j++){
            cout << " "; 
        }
        for (int j = 1; j < i; j++){
            cout << "*";
        }
        for (int j = 1; j <= i; j++){
            cout << "*";    
        }
        cout << endl;
    } 
  
  // reverse pyramid  
       for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << " "; 
        }
        for (int j = i; j < n; j++){
            cout << "*";
        }
        for (int j = i; j <= n; j++){
            cout << "*";    
        }
        cout << endl;
    }
    return 0;
}
