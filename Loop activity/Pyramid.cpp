#include <iostream> 
using namespace std;

int main (){
//nested for loop

	for (int i = 0; i  < 10; i++){ //Row
		for (int k = 1; k < i; k++){ //Column
		 cout << "* "; 
		 cout << "||";
		 cout << "}}}";
		}
		 cout << endl;
	}
	
//inverted
	for (int i = 10; i  > 0; i--){ //Row
		for (int k = 1; k < i; k++){ //Column
		 cout << "* "; 
		 cout << "||";
		 cout << "}}}";
		 
		}
		 cout << endl;
	}
	
   return 0;
} 
