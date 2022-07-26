#pragma once
#include "OverflowCounter.h"

class CounterUser : public Observer {
public:
	CounterUser(int limit = 5);
	OverflowCounter ctr;
	Observer* obs;
	void IncrementBy(int);
	void HandleLimitReached() override;
};