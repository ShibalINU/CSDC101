#include <iostream>
using namespace std;

int main()
{
	char op;
	float num1, num2; //float variable number for decimals

	cout << "choose operator +, -, *, /, %\n" ; //;user input operator
	cin >> op;

    cout << "select number 1: \n"; //user input #1
    cin >> num1;
    
    cout << "select number 2: \n"; //user input #2
    cin >> num2;
    
       switch(op) { //switch operator calculation
        case '+' :
            cout << num1 << "+" << num2 << "=" << num1 + num2; //add
        break;
        case '-':
            cout << num1 << "-" << num2 << "=" << num1 - num2; //minus
        break;
        case '*':
            cout << num1 << "*" << num2 << "=" << num1 * num2;//multiply
        break;
        case '/':
            cout << num1 << "/" << num2 << "=" << num1 / num2;//divide
        break;
        case '%':
            cout << num1 << "%" << num2 << "=" << num1 / num2;//remainder
        break;
        
       }
       
	return 0;
}
