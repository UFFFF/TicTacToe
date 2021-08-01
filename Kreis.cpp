#include "Kreis.h"

Kreis::Kreis(int x, int y)
{
	if (!m_texture.loadFromFile("Pic/Kreis.png")) {
		std::cout << "couldnt load file Kreis" << std::endl;
	}
	s_x = x;
	s_y = y;
}

void Kreis::draw(sf::RenderWindow& window)
{
	sf::Sprite m_sprite(m_texture);
	m_sprite.setPosition(s_x, s_y);
	window.draw(m_sprite);
}
