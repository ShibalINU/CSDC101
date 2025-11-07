#include <iostream>
#include <ctime>
#include <cctype>


using namespace std;


void add();
void pyr();
void BubbleSort();
void Param();


int main()
{

    int option;
    cout << "choose a function: " << endl;
    cout << "1. add: " << endl;
    cout << "2. pyramid: " << endl;
    cout << "3. bubble sort: " << endl;
    cin >> option;
    
    switch (option){
      case 1: add();
      break;
      
      case 2: pyr();
      break;
      
      case 3: BubbleSort();
      break;
      default: cout << "Enter valid number! ";
              return 0;
      break; 
    }
    return 0;
}


void add(){
int n1, n2, res;
  cout << "enter num1: ";
  cin >> n1;
  
  cout << "enter num2: ";
  cin >> n2;
  res = n1 + n2 ;
  cout << n1 << "+" << n2 << " = " << res << endl;
}

void pyr(){ 
  int n;
  cout << "enter number of rows: ";
  cin >> n;
  
  for (int i = 0; i <= n; i++){
    for (int j = 0; j <= i; j++){
        cout << "* ";
    }
    cout << endl;
  }
  
  void add();
}

void BubbleSort(){
   int n;
    cout << "Enter number of elements: ";
    cin >> n; 

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i]; 


    for (int i = 0; i < n - 1; i++) {
     
        for (int j = 0; j < n - i - 1; j++) {
            
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];      
                arr[j] = arr[j + 1];    
                arr[j + 1] = temp;      
            }
        }
    }

    
    cout << "Array after Bubble Sort: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

}
