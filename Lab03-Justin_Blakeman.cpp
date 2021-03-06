//Lab03-Justin_Blakeman
//COSC_2030

#include "pch.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

short int sumFuncShort(short int n) {
	short int sum = 0;
	for (short i = 1; i <= n; i++) {
		sum = sum + i;
	}
	return sum;
}

long int sumFuncLong(long int n) {
	long int sum = 0;
	for (long i = 1; i <= n; i++) {
		sum = sum + i;
	}
	return sum;
}

float prodFuncFloat(long int n) {
	float product = 1;
	for (long i = 1; i <= n; i++) {
		product = i * product;
	}
	return product;
}

double prodFuncDub(long int n) {
	double product = 1;
	for (long i = 1; i <= n; i++) {
		product = i * product;
	}
	return product;
}

float oneOverNF(float n) {
	float result = 0.0;
	for (int i = 1; i <= n; i++) {
		result = (result + (1 / n));
	}
	return result;
}

double oneOverNDub(double n) {
	double result = 0.0;
	for (int i = 1; i <= n; i++) {
		result = (result + (1 / n));
	}
	return result;
}


int main()
{
	cout << "---------------------------------------------------------------------------------------------------------------" << endl;
	short int nSH;
	cout << "Enter a value of n for me to sum up to\t***** n is of type short - MAX n: 255 (higher values will cause overflow) *****" << endl;
	cin >> nSH;
	cout << "The Sum of the type1 Short n = " << nSH << " is : " << sumFuncShort(nSH) << endl << endl;

	cout << "---------------------------------------------------------------------------------------------------------------" << endl;

	long int nL;
	cout << "Enter a value of n for me to sum up to\t***** n is of type long - MAX n: 65535 (higher values will cause overflow) *****" << endl;
	cin >> nL;
	cout << "The Sum of the type Long n = " << nL << " is : " << sumFuncLong(nL) << endl << endl;

	cout << "---------------------------------------------------------------------------------------------------------------" << endl;

	float nF;
	cout << "Enter a value of n for me to factorial '!n' up to\t***** n is of type float - MAX n: 34 (higher values will cause overflow) *****" << endl;
	cin >> nF;
	cout << "The Factorial of the type float n = " << nF << " is : " << prodFuncFloat(nF) << endl << endl;

	cout << "---------------------------------------------------------------------------------------------------------------" << endl;

	double nD;
	cout << "Enter a value of n for me to factorial '!n' up to\t***** n is of type double - MAX n: 170 (higher values will cause overflow) *****" << endl;
	cin >> nD;
	cout << "The Factorial of the type double n = " << nD << " is : " << prodFuncDub(nD) << endl << endl;

	cout << "---------------------------------------------------------------------------------------------------------------" << endl;

	float nFRecip;
	cout << "Enter a value of n for me to sum up n number of 1/n\t***** n is of type float - MAX n : (How good is your computer/compiler?) *****" << endl;
	cin >> nFRecip;
	cout << "The Sum of 1/" << nFRecip << " " << nFRecip << " times is : " << oneOverNF(nFRecip) << endl << endl;

	cout << "---------------------------------------------------------------------------------------------------------------" << endl;

	double nDubRecip;
	cout << "Enter a value of n for me to sum up n number of 1/n\t***** n is of type double - MAX n : (How good is your computer/compiler?) *****" << endl;
	cin >> nDubRecip;
	cout << "The Sum of 1/" << nDubRecip << " " << nDubRecip << " times is : " << oneOverNDub(nDubRecip) << endl << endl;

	cout << "---------------------------------------------------------------------------------------------------------------" << endl;



	return 0;
}
