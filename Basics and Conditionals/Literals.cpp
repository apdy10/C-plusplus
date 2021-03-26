// Literals in C++
// Using Prefixes in Integer literals
// No prefix- Decimal
// 0x - Hexa Decimal
// 0  - Octal
// 0b - Binary

#include<iostream>
using namespace std;
int main() {

	int a = 20;
	int b = 0x1A; // Hexadecimal (0-9 and then A-F) 1A converted to integer = (1*(16^1))+(10*(16^0))
	int c = 016; // Octal (0-7) 16 converted to integer = (1*(8^1))+(6*(8^0)) = 8+6 = 14
	int d = 0b11; // Binary(0-1) 11 being converted to integer = (1*(2^1))+(1*(2^0))=3

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d;
}
