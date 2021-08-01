#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Kreuz
{
public:
	Kreuz(int x, int y);
	void draw(sf::RenderWindow& window);
private:
	sf::Texture m_texture;
	sf::Sprite m_sprite;
	int s_x, s_y;
};

