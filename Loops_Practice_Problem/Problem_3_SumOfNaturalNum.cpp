//for loop
#include <iostream>
using namespace std;

int main(){ 
    int n, i, sum = 0;
    cout << "Enter an integer: ";
    cin >> n;
    
    for(i = 1; i <= n; i++){
        sum = sum + i;
    }
    cout << "The sum is: " << sum << endl;
return 0;
}

//While loop
#include <iostream>
using namespace std;

int main(){
    int n, i = 1, sum = 0;
    cout << "Enter an integer: ";
    cin >> n;
    
    while(i <= n){
        sum = sum + i;
        i++;
    }
    cout << "The sum is: " << sum << endl;
return 0;
}
