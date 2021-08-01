#include "Field.h"

Field::Field()
{
	int f = 1;
	for (unsigned int i = 0; i < m_field.size(); i++) {
		for (unsigned int l = 0; l < m_field.at(i).size(); l++) {
			m_field.at(i).at(l).m_row = i;
			m_field.at(i).at(l).m_column = l;
			m_field.at(i).at(l).start_x = i * (200 + 10);
			m_field.at(i).at(l).start_y = l * (200 + 10);
			m_field.at(i).at(l).number = f;
			f++;
		}
	}
}

void Field::update(sf::RenderWindow& window)
{
	for (auto& el : m_Kreis) {
		el.draw(window);
	}
	for (auto& el : m_Kreuz) {
		el.draw(window);
	}
}

std::pair<int,int> Field::containsfield(int x, int y)
{
	for (unsigned int i = 0; i < m_field.size(); i++) {
		for (unsigned int l = 0; l < m_field.at(i).size(); l++) {
			if (m_field.at(i).at(l).contains(x, y)) {
				return std::make_pair<>(m_field.at(i).at(l).start_x, m_field.at(i).at(l).start_y);
			}
		}
	}
}

void Field::append_Kreis(int x, int y)
{
	Kreis k(x, y);
	m_Kreis.push_back(k);
	std::cout << "placed Kreis" << std::endl;
}

void Field::append_Kreuz(int x, int y)
{
	Kreuz k(x, y);
	m_Kreuz.push_back(k);
	std::cout << "placed Kreuz" << std::endl;
}

bool Field::available(int x, int y)
{
	std::pair<int,int> r_c = get_row_column(x, y);
	if (m_field.at(r_c.first).at(r_c.second).available) {
		m_field.at(r_c.first).at(r_c.second).available = false;
		return true;
	}
	return false;
}

std::pair<int, int> Field::get_row_column(int x, int y)
{
	for (unsigned int i = 0; i < m_field.size(); i++) {
		for (unsigned int l = 0; l < m_field.at(i).size(); l++) {
			if (m_field.at(i).at(l).contains(x, y)) {
				return std::make_pair<>(m_field.at(i).at(l).m_row, m_field.at(i).at(l).m_column);
			}
		}
	}
}

int Field::get_number(int x, int y)
{
	for (unsigned int i = 0; i < m_field.size(); i++) {
		for (unsigned int l = 0; l < m_field.at(i).size(); l++) {
			if (m_field.at(i).at(l).contains(x, y)) {
				return m_field.at(i).at(l).number;
			}
		}
	}
}
