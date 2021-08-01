#include "Kreuz.h"

Kreuz::Kreuz(int x, int y)
{
	if (!m_texture.loadFromFile("Pic/Kreuz.png")) {
		std::cout << "couldnt load file Kreuz" << std::endl;
	}
	s_x = x;
	s_y = y;
}

void Kreuz::draw(sf::RenderWindow& window)
{
	sf::Sprite m_sprite(m_texture);
	m_sprite.setPosition(s_x, s_y);
	window.draw(m_sprite);
}
