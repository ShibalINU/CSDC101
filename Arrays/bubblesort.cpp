#include <iostream>
using namespace std;

int main()
{
    // number 1: initialize array
    int numbers[5] = {5, 1, 4, 2, 3};

    // number 2: print array before sorting
    cout << "Before______:";
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // number 3: bubble sort algorithm implementation
    // outer loop
    for (int i = 0; i < 4; i++) // this determines the number of passes, in this case 4 passes for 5 elements
    {

        // if (i == 0) PASS 1: [5,1,4,2,3]
        // if (i == 1) PASS 2: [1,4,2,3,5]
        // if (i == 2) PASS 3: [1,2,3,4,5]
        // if (i == 3) PASS 4: [1,2,3,4,5]

        // inner loop
        for (int j = 0; j < 4; j++) // compares two of the elements starting from index [0] and index [1]
        {
            // compares number at index j [0] with number at index j + 1 [1] (next element)
            if (numbers[j] > numbers[j + 1])
            {
                // This basiccally stores the value of numbers[j] in a temporary variable, then assigns the value of numbers[j + 1] to numbers[j], and finally assigns the value stored in temp to numbers[j + 1]. This effectively swaps the two values in the array.
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    // number 4: Printing array after sorting
    // PASS 4: 1,2,3,4,5

    cout
        << "After______:";
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}
