#include <iostream>
#include <iomanip>
#include<string>
#define _USE_MATH_DEFINES
#include<math.h>
using namespace std;


//Justin Schieck
//200328630

//functions
double Complex_Addition(double);
double Complex_Subtraction(double);
double Complex_Division(double);
double Complex_Multiplication(double);


struct ComplexNumber {
	double real = 0; // real number
	double imag = 0; // imaginary number
	//char operand = ' ';

};


double Complex_Addition(ComplexNumber a, ComplexNumber b) {
	
	/*double Result;*/

	double totalReal, totalImag;
	totalReal = (a.real + b.real);
	totalImag = (a.imag + b.imag);



	return 0.00;
}

double Complex_Subtraction(ComplexNumber a, ComplexNumber b) {

	double output;
	output = (a.real - b.real) + (a.imag - b.imag);
	 
	return output;
}

double Complex_Multiplication(ComplexNumber a, ComplexNumber b) {

	double output;
	output = ((a.real * b.real) - (a.imag * b.imag)) + ((a.real * b.imag) + (a.imag * b.real));

	return output;
}

double Complex_Division(ComplexNumber a, ComplexNumber b) {

	double output;
	output = (((a.real * b.real) + (a.imag * b.imag)) / ((b.imag * b.imag) + (b.real * b.real))) + (((a.imag * b.real) - (a.real * b.imag)) / ((b.imag * b.imag) + (b.real * b.real)));

	return output;
}



int main() {

	ComplexNumber A, B;
	string firstNum, secondNum, firstCN, secondCN, firstIM, secondIM;
	string delimeterA = "i";
	string delimeterB = "j";
	int menuChoice;
	double total;
	
	
	cout << "Note if using varible letters, use i for first number and j for the second number" << endl;
	cout << "Please enter the first complex number A: " << endl;
	getline(cin, firstNum);
	size_t pos = firstNum.find("i");
	firstCN = firstNum.substr(0, pos);
	firstIM = firstNum.substr(pos);
	A.real = stod(firstCN);
	A.imag = stod(firstIM);


	//firstNum.erase(firstNum.find("i", 0) ,firstNum.end());
	//A.imag = firstNum.substr(0, firstNum.find(delimeterA));
	
	
	cout << "Please enter the second complex number B: " << endl;
	getline(cin, secondNum);

	size_t pos = secondNum.find("i");
	secondCN = secondNum.substr(0, pos);
	secondIM = secondNum.substr(pos);
	B.real = stod(firstCN);
	B.imag = stod(firstIM);
	//B.real = secondNum.substr(0, secondNum.find(delimeterB));
	//B.imag = secondNum.substr(0, secondNum.find(delimeterB));
	//conversion


	do {
		cout << "***Available Operations***" << endl;
		cout << "1. C = A + B " << endl;
		cout << "2. C = A - B " << endl;
		cout << "3. C = A * B " << endl;
		cout << "4. C = A / B " << endl;
		cout << "Exit " << endl;
		cin >> menuChoice;

		switch (menuChoice) {
		case(1): {

			total = Complex_Addition(A, B);

			cout << firstNum << " + " << secondNum << "=" << total << endl;
			break;
		}
		case(2): {
			total = Complex_Subtraction(A, B);
			cout << firstNum << " - " << secondNum << "=" << total << endl;
			break;
		}
		case(3): {
			total = Complex_Multiplication(A, B);
			cout << firstNum << " * " << secondNum << "=" << total << endl;
			break;
		}
		case(4): {
			total = Complex_Division(A, B);
			cout << firstNum << " / " << secondNum << "=" << total << endl;
			break;
		}
		case(5): {
			cout << "Thank you for running this Program..." << endl << endl;

		}
		}
	} while (menuChoice != 5);
	system("pause");
	return(0);
}
