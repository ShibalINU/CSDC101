
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "Enter full name";
    getline (cin, name);
    
    for (char c : name){
        cout << (char) toupper (c);
    }

}
