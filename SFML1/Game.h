#pragma once
#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>
#include "World.h"
#include "Player.h"

class Game
{
public:
	Game();
	void run();

private:
	void processInput();
	void update(sf::Time elapsedTime);
	void render();

	void updateStatistics(sf::Time elapsedTime);


	sf::RenderWindow mWindow;
	World mWorld;
	bool mIsPaused;
	Player mPlayer;

	sf::Font mFont;
	sf::Text mStatisticsText;
	sf::Time mStatisticsUpdateTime;
	std::size_t mStatisticsNumFrames;

	static const sf::Time TimePerFrame;
};

