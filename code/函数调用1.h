#include<iostream>
#include<windows.h>
using namespace std;

double power(double x, int n); //求x的n次方
int main() {
	int value = 0;
	cout << "Enter an 8 bit binary number    ";
	for (int i = 7; i >= 0; i--) {
		char ch;
		cin >> ch;
		if (ch == '1')
			value += static_cast <int>(power(2, i));
	}
	cout << "decimal value is  " << value << endl;

	Sleep(8000);
	return 0 ;
}

double  power(double x, int n) {
	double val = 1.0;
	while (n--)
		val *= x ;
	return val ;
}

