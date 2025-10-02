#include <iostream>
using namespace std;

int main(){
	
	float Price = 1;
	int UserMoney;
	
		cout << "How much money do you have? \n";
		cin >> UserMoney;
		
	if (UserMoney >= 1){
		cout << "Enjoy your lemonade! \n";
	}else{
		cout << "Sorry, you need more money \n";
	}
	
	return 0;
}
