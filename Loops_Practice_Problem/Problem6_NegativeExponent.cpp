#include <iostream>
using namespace std;

int main(){
    float base, exponent, i, result = 1, abst, final;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    
    if (exponent < 0){ 
        abst = -exponent;
         for(i = 1; i <= abst; i++){
         result = result * base;
         final = result * 1 / (result * result); 
    }
    }else{
        for(i = 1; i <= exponent; i++){
             result = result * base;
             final = result;
        }
    }
    cout << base << " ^ " << exponent << " = " << final << endl;
return 0;
}
