#include "Visual.h"

Visual::Visual(sf::RenderWindow& window)
{
	sf::RectangleShape w1;
	sf::RectangleShape w2;
	sf::RectangleShape s1;
	sf::RectangleShape s2;
	w1.setFillColor(sf::Color::White);
	w2.setFillColor(sf::Color::White);
	s1.setFillColor(sf::Color::White);
	s2.setFillColor(sf::Color::White);
	w1.setSize(sf::Vector2f(620,10));
	w2.setSize(sf::Vector2f(620, 10));
	s1.setSize(sf::Vector2f(10, 620));
	s2.setSize(sf::Vector2f(10, 620));
	w1.setPosition(sf::Vector2f(0,200));
	w2.setPosition(sf::Vector2f(0, 410));
	s1.setPosition(sf::Vector2f(200, 0));
	s2.setPosition(sf::Vector2f(410, 0));
	window.draw(w1);
	window.draw(w2);
	window.draw(s1);
	window.draw(s2);
}
