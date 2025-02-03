﻿#include <iostream>
#include <locale.h>

#include "Counter.h"

int main() {
	setlocale(LC_ALL, "Rus");
	std::string q;
	int count;
	Counter c; //делаем счётчик со значение по-умолчанию
	std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no:";
	std::cin >> q;
	if (q == "yes") {
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> count;
		c = Counter(count);
	}

	do {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> c.charInput;

		if (c.charInput == "+") {
			c.increaseValue();
		}
		if (c.charInput == "-") {
			c.decreaseValue();
		}
		if (c.charInput == "=") {
			std::cout << c.currentValue() << std::endl;
		}
		if (c.charInput == "x") {
			std::cout << "До свидания!";
		}
	} while (c.charInput != "x");
}