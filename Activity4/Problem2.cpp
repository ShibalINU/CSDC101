//Problem 2: Weather-Based Discounts

//Problem:
//You want to attract more customers. If it’s hot (temperature is 30°C or more), offer a 20% discount.

//Task:
//Write a program that:
//Ask for the temperature.

//Sets the price to:
//$0.80 if temperature >= 30
//$1.00 otherwise
//Outputs the final price.

//Sample Input:
//Enter today's temperature in Celsius: 32

//Sample Output:

//It's hot! Lemonade costs $0.80 today.

#include <iostream>
using namespace std;

int main(){
	
	float Temperature, Price;
	
	cout << "What is the temperature? \n"; //user input temperature
	cin >> Temperature;
	
	if (Temperature >= 30){ //if the temperature is 30 degrees or more
		Price = 0.80; //price will be 0.80$
		cout << "It's hot! Lemonade costs " << Price << "$ today "; 
	}else{
		Price = 1.00; //if not, it will be 1$
		cout << "Lemonade costs " << Price << "$ today ";
	}
	return 0;
}
