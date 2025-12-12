#include <iostream>
using namespace std;

int main() {
    int n, positive = 0, negative = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int rotated[n];
    for(int i = 0; i < n; i++){
        rotated[i] = arr[(i + 1) % n];
    }
    
    for(int i = 0; i < n; i++){
        cout << rotated[i]  << " ";
    }

    return 0;
}
