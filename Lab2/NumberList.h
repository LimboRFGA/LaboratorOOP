#pragma once
#include <cstdio>
#include <algorithm>

class NumberList {
private:
	int numbers[10];
	int count;
public:
	void Init();
	bool Add(int x);

	void Sort();
	void Print();
};
