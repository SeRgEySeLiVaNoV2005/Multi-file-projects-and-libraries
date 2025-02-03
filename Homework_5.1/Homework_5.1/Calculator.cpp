#include <iostream>
#include <math.h>
#include "Calculator.h"
using namespace std;


void Calculator::sum(int num1, int num2) {
	cout << num1 + num2 << endl;
}
void Calculator::subtraction(int num1, int num2) {
	cout << num1 - num2 << endl;
}
void Calculator::multiplication(int num1, int num2) {
	cout << num1 * num2 << endl;
}
void Calculator::division(int num1, int num2) {
	cout << num1 / num2 << endl;
}
void Calculator::exponentiation(int num1, int num2) {
	cout << pow(num1, num2) << endl;
}
Calculator::Calculator() {
	double numInput1, numInput2;
	int modeInput;
	cout << "������� ������ �����: ";
	cin >> numInput1;
	cout << "������� ������ �����: ";
	cin >> numInput2;
	cout << "�������� �������� (1 - ��������, 2 - ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
	cin >> modeInput;

	switch (modeInput) {
	case 1:
		sum(numInput1, numInput2);
		break;
	case 2:
		subtraction(numInput1, numInput2);
		break;
	case 3:
		multiplication(numInput1, numInput2);
		break;
	case 4:
		division(numInput1, numInput2);
		break;
	case 5:
		exponentiation(numInput1, numInput2);
		break;
	}
}
