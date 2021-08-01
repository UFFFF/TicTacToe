#pragma once
#include <iostream>

class Tiles
{
public:
	bool contains(int x, int y);
	int m_row, m_column, start_x, start_y, number;
	bool available = true;
};

