#pragma once
#include <SFML/Graphics.hpp>

class PlayerCar
{
public:
	PlayerCar(std::string path);

	void move(float &dt);
	void draw(sf::RenderWindow &win);

private:
	sf::Texture m_texture;
	sf::Sprite m_sprite;

	float m_speed;
};