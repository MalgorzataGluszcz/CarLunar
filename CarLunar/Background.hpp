#pragma once
#include <SFML/Graphics.hpp>

class Background
{
public:
	Background(std::string path);

	void draw(sf::RenderWindow &win);

private:
	sf::Texture m_texture;
	sf::Sprite m_sprite;
};