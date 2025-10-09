#include <iostream>
using namespace std;
 
int main()
{   
   double term_1 = 1, term_2 = 1, n, Next_Term;
   
   cout << "Enter number of terms: ";
   cin >> n;
   
        cout << term_1 << ", " << term_2 << ", ";
        for (double counter = 3; counter <= n; counter++){
            Next_Term = term_1 + term_2;
            cout << Next_Term << ", ";
            term_1 = term_2;
            term_2 = Next_Term;
        }
 
    
    return 0;
}
