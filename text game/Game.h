#pragma once
#include "Character.h"

class Game
{
public:
	Game();
	virtual ~Game();

	//Operators

	//Functions
	void initGame();
	void mainMenu();

	//Accessors
	inline bool getPlaying() const { return this->playing; };

private:
	int choice;
	bool playing;

	Character character;
};

