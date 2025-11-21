#include <iostream>
#include <cmath>
using namespace std;

void cToFarenheit(float celsius);
void cToCelsius(float farenheit);

int main()
{
    int choice;
    int temp = 0; // this is just a temporary viariable to pass to functions
    cout << "Choose a conversion type " << endl;
    cout << "1. convert to farenheit " << endl;
    cout << "2. convert to celsius " << endl;
    cout << "3. Exit " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        cToFarenheit(temp);
        break;
    case 2:
    {
        cToCelsius(temp);
        break;
    }
    case 3:
        cout << "Exiting the program." << endl;
        return 0;
    }
    default:
        cout << "Invalid choice!" << endl;
    }
}
void cToFarenheit(float celsius)
{
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    float farenheit = (celsius * 9 / 5) + 32;
    cout << "Temperature in Farenheit: " << farenheit << " F" << endl;
}

void cToCelsius(float farenheit)
{
    cout << "Enter temperature in Farenheit: ";
    cin >> farenheit;
    float celsius = (farenheit - 32) * 5 / 9;
    cout << "Temperature in Celsius: " << celsius << " C" << endl;
}
