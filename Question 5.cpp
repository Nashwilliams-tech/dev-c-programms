#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	
	cout << "Enter first integer: ";
	cin >> num1;
	
	cout << "Enter second integer: ";
	cin >> num2;
		
	if(num1 > num2)
		cout << "First value is greater";
	else if(num2 > num1)
		 cout << "Second value is greater";
	else
	    cout << "Both value are equal";
		
	return 0;		 
}
