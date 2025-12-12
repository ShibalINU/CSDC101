#include <iostream>
using namespace std;

int main() {
    int n, avg, sum = 0, counter = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
        avg = sum / n;
    for(int i = 0; i < n; i++){
        if (arr[i] > avg){
            counter++;
        }
    }
    cout << "Average: " << avg << endl;
    cout << "There are " << counter << " numbers higher than average" << endl;
    return 0;
}
