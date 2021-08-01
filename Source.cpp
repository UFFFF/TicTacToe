#include <iostream>
#include <SFML/Graphics.hpp>
#include "Visual.h"
#include "Field.h"

int main() {
    bool game_over = false;
    int a = 0;
    WinCon w;
    Field f;
    sf::RenderWindow window(sf::VideoMode(620, 620), "TicTacToe");
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                sf::Vector2i p = sf::Mouse::getPosition(window);
                std::pair<int,int> s_s = f.containsfield(p.x, p.y);
                std::cout << s_s.first << " " << s_s.second << std::endl;
                if (a % 2 == 0 && (f.available(p.x, p.y)) && !game_over) {
                    f.append_Kreis(s_s.first, s_s.second);
                    w.append_kreis(f.get_number(p.x, p.y));
                    if (w.won()) {
                        std::cout << "KREIS HAT GEWONNEN" << std::endl;
                        game_over = true;
                    }
                    a++;
                }
                else if(a % 2 != 0 && (f.available(p.x, p.y)) && !game_over){
                    f.append_Kreuz(s_s.first, s_s.second);
                    w.append_kreuz(f.get_number(p.x, p.y));
                    if (w.won()) {
                        std::cout << "KREUZ HAT GEWONNEN" << std::endl;
                        game_over = true;
                    }
                    a++;
                }
            }
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        Visual v(window);
        f.update(window);
        window.display();
    }
	return 0;
}