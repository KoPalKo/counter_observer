#pragma once
#include "Counter.h"
#include "Observer.h"

class OverflowCounter : public Counter {
public:
	OverflowCounter(int value = 0, int limit = 5);
	void inc() override;
	void dec() override;
	operator int() override;
	~OverflowCounter() {};
	Observer* obs;
	void SetObserver(Observer*);
private:
	int val;
	int max;
	void Notify();
};