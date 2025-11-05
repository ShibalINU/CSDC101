#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n; // input number of elements

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i]; // input array elements

    bool ascending = true; // assume array is ascending

    // check if each element is less than or equal to the next
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) { // if any pair is not ascending
            ascending = false;
            break; // stop checking
        }
    }

    // display result
    if (ascending)
        cout << "The array is in ascending order.";
    else
        cout << "The array is not in ascending order.";

    return 0;
}
