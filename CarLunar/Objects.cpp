#include "Objects.hpp"

Objects::Objects(std::string path)
{
	m_texture.loadFromFile("data/gfx/" + path);
	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(sf::Vector2f(550.0f, 450.0f));
	m_sprite.setOrigin(m_sprite.getLocalBounds().width / 2.0f, m_sprite.getLocalBounds().height / 2.0f);
}

void Objects::randomMove(float& dt)
{

}

void Objects::draw(sf::RenderWindow& win)
{
	win.draw(m_sprite);
}