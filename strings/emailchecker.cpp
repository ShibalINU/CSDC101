#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string email;
    cout << "enter email: ";
    getline(cin, email);
    
    if(email.find("@") != -1){
        cout << "valid email";
    }else{
        cout << "invalid email";
    }

    return 0;
}
