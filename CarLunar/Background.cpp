#include "Background.hpp"

Background::Background(std::string path)
{
	m_texture.loadFromFile("data/gfx/" + path);
	m_sprite.setTexture(m_texture);
	m_sprite.setScale(1.5f, 1.4f);
}

void Background::draw(sf::RenderWindow& win)
{
	win.draw(m_sprite);
}