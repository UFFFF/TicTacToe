#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Kreis
{
public:
	Kreis(int x, int y);
	void draw(sf::RenderWindow& window);
private:
	int s_x, s_y;
	sf::Texture m_texture;
	sf::Sprite m_sprite;
};

