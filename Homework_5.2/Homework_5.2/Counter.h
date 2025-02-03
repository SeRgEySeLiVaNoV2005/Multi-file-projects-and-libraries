#pragma once

#include <string>

class Counter {
private:
	int value = 0;
public:
	std::string charInput;
	void increaseValue();
	void decreaseValue();
	int currentValue();
	Counter(int value);
	Counter();
};