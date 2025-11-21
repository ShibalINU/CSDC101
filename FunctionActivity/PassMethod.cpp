#include <iostream>
#include <cmath>
using namespace std;

void PassByVal(int n);
void PassByRef(int &n);

int main()
{

    int cval = 200;
    cout << "Before PassByVal: " << cval << endl;
    PassByVal(cval);
    cout << "After PassbyVal: " << cval << endl;

    cout << endl;

    int cref = 200;
    cout << "Before PassRef: " << cref << endl;
    PassByRef(cref);
    cout << "After PassByRef: " << cref << endl;
    return 0;
}

void PassByVal(int n)
{

    n = sqrt(n);
    cout << "inside passByVal: " << n << endl;
}

void PassByRef(int &n)
{
    n = sqrt(n);
    cout << "inside passByRef: " << n << endl;
}
