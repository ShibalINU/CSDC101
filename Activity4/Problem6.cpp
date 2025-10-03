//Problem 6: Switch problem 1 to 5
//Combine all problems using switch statement

//Sample Input:
//What problem do you want to see? 1

//Sample Output:
//*Basic pricing Decision Runs*

#include <iostream>
using namespace std;

int main() {
	char Continue; // while loop variable
	do {
		int Choice;
		cout << "Which problem do you want to see?\n"; //user choice menu
		cout << "1. Problem 1\n";
		cout << "2. Problem 2\n";
		cout << "3. Problem 3\n";
		cout << "4. Problem 4\n";
		cout << "5. Problem 5\n";
		cin >> Choice;

		switch (Choice) {
			case 1: { 	//case 1, problem 1 code
				float Price = 1, UserMoney;
				cout << "How much money do you have?\n";
				cin >> UserMoney;
				if (UserMoney >= Price) {
					cout << "Enjoy your lemonade!\n";
				} else {
					cout << "Sorry, you need more money\n";
				}
				break;
			}
			case 2: { //case 2, problem 2 code
				float Temperature, Price;
				cout << "What is the temperature?\n";
				cin >> Temperature;
				if (Temperature >= 30) {
					Price = 0.80;
					cout << "It's hot! Lemonade costs " << Price << "$ today\n";
				} else {
					Price = 1.00;
					cout << "Lemonade costs " << Price << "$ today\n";
				}
				break;
			}
			case 3: {//case 3, problem 3 code
				int Lemons, Sugar;
				cout << "How many lemons and sugars do you have?\n";
				cin >> Lemons >> Sugar;
				if (Lemons > 0 && Sugar > 0) {
					cout << "You're ready to make a lemonade\n";
				} else {
					cout << "You can't make a lemonade\n";
				}
				break;
			}
			case 4: { //case 4, problem 4 code
				float Cups, Price = 1, Total, DiscountedPrice;
				cout << "How many cups?\n";
				cin >> Cups;
				if (Cups >= 1 && Cups <= 4) {
					Total = Cups * Price;
					cout << "Total cost: " << Total << "$\n";
				} else if (Cups >= 5 && Cups <= 9) {
					Total = Cups * Price * 0.10;
					DiscountedPrice = Cups * Price - Total;
					cout << "Total cost: " << DiscountedPrice << "$\n";
				} else if (Cups >= 10) {
					Total = Cups * Price * 0.20;
					DiscountedPrice = Cups * Price - Total;
					cout << "Total cost: " << DiscountedPrice << "$\n";
				}
				break;
			}
			case 5: { //case 5, problem 5 code
				char Movement;
				int X = 0, Y = 0;
				cout << "Press W to move FORWARD\n";
				cout << "Press S to move BACKWARD\n";
				cout << "Press A to move LEFT\n";
				cout << "Press D to move RIGHT\n";
				cin >> Movement;
				switch (Movement) {
					case 'W':
					case 'w':
						Y = Y + 1;
						cout << "Location of the player is (" << X << "," << Y << ")\n";
						break;
					case 'S':
					case 's':
						Y = Y - 1;
						cout << "Location of the player is (" << X << "," << Y << ")\n";
						break;
					case 'A':
					case 'a':
						X = X - 1;
						cout << "Location of the player is (" << X << "," << Y << ")\n";
						break;
					case 'D':
					case 'd':
						X = X + 1;
						cout << "Location of the player is (" << X << "," << Y << ")\n";
						break;
					default:
						cout << "INVALID INPUT\n";
						break;
				}
				break;
			}
			default:
				cout << "INVALID CHOICE\n";
				break;
		}
		cout << "\nDo you want to continue? (y/n): ";
		cin >> Continue;
	} while (Continue == 'y' || Continue == 'Y'); //loop to continue or stop
	return 0;
}

