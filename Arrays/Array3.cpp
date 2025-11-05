#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n; // input number of elements

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i]; // input elements

    int last = arr[n - 1]; // store last element

    // shift all elements one position to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last; // place last element at the start

    cout << "After rotation: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " "; // display rotated array

    return 0;
}
