#pragma once

class Counter
{
public:
	Counter(int start);
	Counter();
	void setN(int n);
	void plus();
	void minus();
	void current();
	void count();

private:
	int n;
};