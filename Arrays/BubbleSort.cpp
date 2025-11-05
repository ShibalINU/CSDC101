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

    // Bubble Sort Algorithm
    // Outer loop - number of passes
    for (int i = 0; i < n - 1; i++) {
        // Inner loop - compare adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // If the left element is greater, swap them
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];      // store arr[j] in temp
                arr[j] = arr[j + 1];    // move smaller element left
                arr[j + 1] = temp;      // move larger element right
            }
        }
    }

    // Display the sorted array
    cout << "Array after Bubble Sort: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
