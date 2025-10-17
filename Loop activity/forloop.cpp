#include <iostream>
using namespace std;

int main(){
      int n, term1 = 1, term2 = 1, nexterm;
      cout << "enter number of terms:" << endl;
      cin >> n;
      for (int counter = 3; counter <= n; counter++){
          nexterm = term1 + term2;
          term1 = term2;
          term2 = nexterm;
      }
      
      for (int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << nexterm;
        }
        cout << endl;
      }
return 0;
}
