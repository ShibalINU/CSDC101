//Problem 5: Player Movement

//Problem:
//The player moves depending on the pressed button. Player starts at (0,0).

//Task:


//Write a program that:
//Lets the player change coordinates depending on the button pressed.
//W =  0, +1
//S = 0, -1
//A = -1,0
//D = +1,0 

//Sample Input:
//W


//Sample Output:
//The location of the player is ( 0, 1)

#include <iostream>
using namespace std;

int main(){
	
	char Movement; 
	int X = 0, Y = 0; // X and Y values
		cout << "Press W to move FORWARD \n"; //list of movements
		cout << "Press S to move BACKWARD \n";
		cout << "Press A to move LEFT \n";
		cout << "Press D to move RIGHT \n";
		cin >> Movement;

	switch (Movement){
		case 'W': //Incase of capslock keys
		case 'w':
			Y = Y + 1; // if W is pressed Y adds 1
			cout << "Location of the player is" << "(" << X << "," << Y << ")"; //hehe, idk how to recreate the bracket so i did this 
			break;
		case 'S':
		case 's':
			Y = Y - 1; // if S is pressed Y subtracts 1
			cout << "Location of the player is" << "(" << X << "," << Y << ")";
			break;
		case 'A':
		case 'a': //if A is pressed X subtracts 1
			X = X - 1;
			cout << "Location of the player is" << "(" << X << "," << Y << ")";
			break;
		case 'D':
		case 'd': // if D is pressed X adds 1
			X = X + 1;
			cout << "Location of the player is" << "(" << X << "," << Y << ")"; 
			break;
		default:
			cout << "INVALID INPUT \n"; // if other characters are inputted it will be considered invalid.
			break;
	}	
	return 0;
}
