#include "PlayerCar.hpp"

PlayerCar::PlayerCar(std::string path) : m_speed(120.0f)
{
	m_texture.loadFromFile("data/gfx/" + path);
	m_sprite.setTexture(m_texture);
	m_sprite.setTextureRect(sf::IntRect(0, 0, 64, 68));
	m_sprite.setPosition(sf::Vector2f(70.0f, 60.0f));
}

void PlayerCar::move(float &dt)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		m_sprite.setPosition(m_sprite.getPosition() + sf::Vector2f(0.0f, -1.0f) * m_speed * dt);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		m_sprite.setPosition(m_sprite.getPosition() + sf::Vector2f(0.0f, 1.0f) * m_speed * dt);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		m_sprite.setPosition(m_sprite.getPosition() + sf::Vector2f(-1.0f, 0.0f) * m_speed * dt);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		m_sprite.setPosition(m_sprite.getPosition() + sf::Vector2f(1.0f, 0.0f) * m_speed * dt);
	}
}

void PlayerCar::draw(sf::RenderWindow& win)
{
	win.draw(m_sprite);
}