#include "Background.hpp"
#include "PlayerCar.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Car Lunar");

	Background bg("LevelOne.png");
	PlayerCar playerCar("Player.png");

	sf::Clock gameClock;
	float dt = 0.0f;

	while (window.isOpen())
	{
		dt = gameClock.getElapsedTime().asSeconds();

		sf::Event ev;
		while (window.pollEvent(ev))
		{
			switch (ev.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			default:
				break;
			}
		}

		playerCar.move(dt);
		dt = gameClock.restart().asSeconds();

		window.clear();
		bg.draw(window);
		playerCar.draw(window);
		window.display();

	}
	return 0;
}