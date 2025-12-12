#include <iostream>
using namespace std;

int main() {
    int n, target, counter = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout << "what is your target number?: ";
    cin >> target;
    
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            counter++;
        }
    }
    cout << "the number appeared: " << counter << " times.";

    return 0;
}
