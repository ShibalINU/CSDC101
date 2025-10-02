//Problem 3: Inventory Check

//Problem:
//You can only sell lemonade if you have lemons and sugar.

//Task:
//Write a program that:

//Ask the user how many lemons and how many cups of sugar they have.
//If either lemons or sugar is 0 or less, 
//	output: "You can't make lemonade!"
//Otherwise,
//	output: "You're ready to sell lemonade!"

//Sample Input:
//Lemons: 5
//Sugar: 0

//Sample Output:
//You can't make lemonade!

#include <iostream>
using namespace std;

int main(){
	
	int Lemons, Sugar;
	
	cout << "How many lemons and sugars do you have? \n"; //user input lemons and sugar
	cin >> Lemons >> Sugar;

	if(Lemons > 0 && Sugar > 0){ // if lemons and sugar is both greater than zero, you can make a lemonade
		cout << "You're ready to make a lemonade \n";
	}else{
		cout << "You can't make a lemonade \n"; //if not, you can't make a lemonade
	}
	return 0;
}
