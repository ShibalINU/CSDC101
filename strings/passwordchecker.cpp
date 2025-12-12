#include <iostream>
#include <string>

using namespace std;

int main()
{
    string password; 
    cout << "enter password: ";
    getline(cin, password);
    
    bool uppercase = false, lowercase = false, digit = false, special = false;
    
  for (int i = 0; i < password.length(); i++) {
        char c = password[i];
        if (c >= 'A' && c <= 'Z') uppercase = true;
        else if (c >= 'a' && c <= 'z') lowercase = true;
        else if (c >= '0' && c <= '9') digit = true;
        else special = true;
    }
    if (password.length() < 8){
        cout << "weak :passowrd too short";
    }else if (uppercase && lowercase && digit && special){
        cout << "Strong password!";
    }else{
        cout << "medium password: could be better";
    }
    
    return 0;
}
