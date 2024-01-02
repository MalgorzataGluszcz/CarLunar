#pragma once
#include <SFML/Graphics.hpp>

class Objects
{
public:
	Objects(std::string path);

	void randomMove(float& dt);
	void draw(sf::RenderWindow& win);

	sf::FloatRect getGlobalBounds() { return m_sprite.getGlobalBounds(); }

private:
	sf::Texture m_texture;
	sf::Sprite m_sprite;
};