#pragma once
#include <SFML/Graphics.hpp>
#include <array>
#include <vector>
#include "Tiles.h"
#include "Kreis.h"
#include "Kreuz.h"
#include "WinCon.h"

class Field
{
public:
	Field();
	void update(sf::RenderWindow& window);
	std::pair<int,int> containsfield(int x, int y);
	void append_Kreis(int x, int y);
	void append_Kreuz(int x, int y);
	bool available(int x, int y);
	int get_number(int x, int y);
private:
	std::array<std::array<Tiles, 3>, 3> m_field;
	std::vector<Kreis> m_Kreis;
	std::vector<Kreuz> m_Kreuz;
	std::pair<int, int> get_row_column(int x, int y);
};

