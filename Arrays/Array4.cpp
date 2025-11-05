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

    // initialize values
    int minVal = arr[0], maxVal = arr[0], sum = 0;
    int evenCount = 0, oddCount = 0;

    // analyze array
    for (int i = 0; i < n; i++) {
        if (arr[i] < minVal) minVal = arr[i]; // find smallest
        if (arr[i] > maxVal) maxVal = arr[i]; // find largest
        sum += arr[i]; // compute total sum
        if (arr[i] % 2 == 0) evenCount++; // count even numbers
        else oddCount++; // count odd numbers
    }

    // display results
    cout << "Minimum: " << minVal << endl;
    cout << "Maximum: " << maxVal << endl;
    cout << "Sum: " << sum << endl;
    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}
