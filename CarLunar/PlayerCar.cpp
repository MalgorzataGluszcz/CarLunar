#include <cmath>
#include "PlayerCar.hpp"

PlayerCar::PlayerCar(std::string path) : m_position(350.0f, 450.0f), m_velocity(0.0f, 0.0f), m_angle(0.0f)
{
	m_texture.loadFromFile("data/gfx/" + path);
	m_sprite.setTexture(m_texture);
	m_sprite.setTextureRect(sf::IntRect(0, 0, 64, 68));
	m_sprite.setOrigin(m_sprite.getLocalBounds().width / 2.0f, m_sprite.getLocalBounds().height / 2.0f);
}

void PlayerCar::move(float &dt)
{
	m_velocity = 
	{
		m_velocity.x * cosf(m_angle) - m_velocity.y * sinf(m_angle),
		m_velocity.x * sinf(m_angle) + m_velocity.y * cosf(m_angle)
	};

	m_position += m_velocity;

	//if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	//{
	//	m_sprite.setPosition(m_sprite.getPosition() + sf::Vector2f(0.0f, -1.0f) * m_speed * dt);
	//	//m_sprite.setRotation(0);
	//}
	//if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	//{
	//	m_sprite.setPosition(m_sprite.getPosition() + sf::Vector2f(0.0f, 1.0f) * m_speed * dt);
	//	//m_sprite.setRotation(180);
	//}

	//if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	//{
	//	m_sprite.setPosition(-posX, posY);
	//	m_sprite.setRotation(angle);
	//	//m_sprite.setRotation(270);
	//}
	//if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	//{
	//	m_sprite.setPosition(posX, posY);
	//	m_sprite.setRotation(angle);
	//}

	//m_sprite.setRotation(angle);

	m_velocity = {0.0f, 0.0f};
}

bool PlayerCar::collisionWith(Objects& obj)
{
	return m_sprite.getGlobalBounds().intersects(obj.getGlobalBounds());
}

void PlayerCar::draw(sf::RenderWindow& win)
{
	m_sprite.setPosition(m_position);
	m_sprite.setRotation(m_angle * 180.f / 3.141593f);
	win.draw(m_sprite);
}