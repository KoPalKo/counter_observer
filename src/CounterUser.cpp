#include <iostream>
#include "../lib/CounterUser.h"

using namespace std;

CounterUser::CounterUser(int limit) : ctr(0, limit) {
	ctr.SetObserver(this);
}

void CounterUser::IncrementBy(int n)
{
	int i = 0;
	while (i < n) { ctr.inc(); i++; }
}

void CounterUser::HandleLimitReached()
{
	cout << "Limit has been reached" << endl;
}