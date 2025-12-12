#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, reversed = "";
    cout << "Enter word: ";
    cin >> name;
    for(int i = name.length(); i >= 0; i--){
        reversed += name[i];
    }
    
    cout << reversed << endl;
    return 0;
}
