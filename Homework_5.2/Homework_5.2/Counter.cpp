#include "Counter.h"
void Counter::increaseValue() {
	this->value++;
}; //+1
void Counter::decreaseValue() {
	this->value--;
}; //-1
int Counter::currentValue() {
	return value;
}; // Посмотреть текущее значение
Counter::Counter(int value) {
	this->value = value;
}; // Задать начальное значение 
Counter::Counter() {}; // Возможность создания экземпляра класса