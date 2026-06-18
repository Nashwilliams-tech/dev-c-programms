#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	long long binary;
	int decimal = 0, i = 0, remainder;
	
	cout << "Enter a binary number: ";
	cin >> binary;
	
	long long temp = binary;
	
	while (temp != 0) {
		remainder = temp % 10;
		decimal += remainder * pow(2, i);
		temp /= 10;
		i++;
	}
	
	cout << "\nDecimal = " << decimal;
	
	cout << "\nHexadecimal = "
	     << uppercase << hex << decimal;
	     
	cout << "\nOctal = "
	     << oct << decimal;
		 
	return 0;	      
}
