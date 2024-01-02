#pragma once
#include "Objects.hpp"

class PlayerCar
{
public:
	PlayerCar(std::string path);

	void move(float &dt);
	bool collisionWith(Objects &obj);
	void draw(sf::RenderWindow &win);

private:
	sf::Texture m_texture;
	sf::Sprite m_sprite;

	sf::Vector2f m_position;
	sf::Vector2f m_velocity;

	float m_angle;
};