#include "Counter.h"
void Counter::increaseValue() {
	this->value++;
}; //+1
void Counter::decreaseValue() {
	this->value--;
}; //-1
int Counter::currentValue() {
	return value;
}; // ���������� ������� ��������
Counter::Counter(int value) {
	this->value = value;
}; // ������ ��������� �������� 
Counter::Counter() {}; // ����������� �������� ���������� ������