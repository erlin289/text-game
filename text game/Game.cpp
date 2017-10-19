#include "includes.h"
#include "Game.h"



Game::Game()
{
	choice = 0;
	playing = true;
}


Game::~Game()
{
}

//Functions
void Game::initGame()
{
	string name;
	cout << "Enter your character name:" << endl;
	cin >> name;
	character.initialize(name);
}

void Game::mainMenu()
{
	cout << "Main Menu" << endl;
	cout << "0: Character Sheet" << endl;
	cout << "1: Quit" << endl;


	cout << endl << "Choice: " << endl;
	cin >> choice;

	switch (choice)
	{
	case 0:
		character.printSheet();
		break;
	case 1:
		playing = false;
		break;
	default:
		break;
	}
}

