//Problem 4: Bulk Purchase Discount

//Problem:
//Customers get discounts based on how many cups they buy:
//1–4 cups: No discount
//5–9 cups: 10% discount
//10+ cups: 20% discount
//Each cup is $1.

//Task:

//Write a program that:
//Ask how many cups the customer wants.
//Calculates the total cost with the correct discount.
//Outputs the final price.

//Sample Input:
//How many cups? 7

//Sample Output:
//Total cost: $6.30

#include <iostream>
using namespace std;

int main(){
	
	float Cups, Price = 1, Total, DiscountedPrice;
		cout << "How many cups? \n"; //user input
		cin >> Cups;

	if (Cups >= 1 && Cups <= 4){ //range of cup numbers from 1 - 4 will not have discount
		Total = Cups * Price; //total multiplied to price
		cout << "Total cost: \n" << Total << "$";
	}
	else if (Cups >= 5 && Cups <= 9){// range of cup numbers with 10% discount from 5 - 9
		Total = Cups * Price * 0.10; // Total cups * price * discount
		DiscountedPrice = Cups * Price - Total; // discounted price from original price minus the total
		cout << "Total cost: \n" << DiscountedPrice << "$";
	}
	else if (Cups >= 10){ // range of cup numbers with 20% discount 
		Total = Cups * Price * 0.20;
		DiscountedPrice = Cups * Price - Total;
		cout << "Total cost: \n" << DiscountedPrice << "$";
	}
	return 0;
}
