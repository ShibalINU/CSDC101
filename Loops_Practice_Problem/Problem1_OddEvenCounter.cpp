#include <iostream>
using namespace std;

int main(){
    
    int num, even = 0, odd = 0;
    cout << "Enter 10 positive integers: ";
    
    for (int i = 1; i < 10; i++){
        cin >> num;
        if (num % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    cout << "Even numbers: " << even << endl;
    cout << "odd numbers: " << odd << endl;
    return 0;
}
