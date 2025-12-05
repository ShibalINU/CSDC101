#include <iostream>
using namespace std;

int main()
{
    int Arraysize;
    cout << "enter number of elements: " << endl;
    cin >> Arraysize ;
    
    int numbers[Arraysize];
    cout << "enter elements: " << endl;
    for (int h = 0; h < Arraysize; h++){
        cin >> numbers[h];
    }
    
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
        for (int j = 0; j < sizeof(numbers) / sizeof(numbers[0]); j++){
            
            if (numbers[j] > numbers[j + 1]){
                int temp = numbers[j];
                numbers[j] = numbers [j + 1];
                numbers [j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
        cout << numbers[i] << " ";
    }

    return 0;
}
