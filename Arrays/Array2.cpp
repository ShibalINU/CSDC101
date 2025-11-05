#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n; // input number of elements

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i]; // input array values

    double sum = 0; // store total sum
    for (int i = 0; i < n; i++)
        sum += arr[i]; // add each element to sum

    double mean = sum / n; // compute average
    cout << "Mean = " << mean; // display result

    return 0;
}
