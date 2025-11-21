#include <iostream>
using namespace std;

int main()
{
    int choice;
    float Farenheit, Celsius;
    cout << "Choose a conversion type: " << endl;
    cout << "1. Celsius to Farenheit: " << endl;
    cout << "2. Farenheit to celsius: " << endl;
    cout << "3. Exit" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter temperature in Celsius: ";
        cin >> Celsius;
        Farenheit = (Celsius * 9 / 5) + 32;
        cout << "Temperature in Farenheit: " << Farenheit << " F" << endl;
        break;
    case 2:
        cout << "Enter temperature in Farenheit: ";
        cin >> Farenheit;
        Celsius = (Farenheit - 32) * 5 / 9;
        cout << "Temperature in Celsius: " << Celsius << " C" << endl;
        break;
    case 3:
        cout << "Exiting the program." << endl;
        return 0;
        break;

    default:
        cout << "Invalid choice!" << endl;
    }
    return 0;
}
