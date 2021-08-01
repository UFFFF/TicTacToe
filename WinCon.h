#pragma once
#include <vector>
#include <algorithm>
#include <iostream>

class WinCon
{
public:
	void append_kreis(int i);
	void append_kreuz(int i);
	bool won();
private:
	std::vector<int> kreis;
	std::vector<int> kreuz;
};

