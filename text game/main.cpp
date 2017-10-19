#include "includes.h"
#include "Game.h"
#include "Character.h"

int main()
{
	srand(time(NULL));

	Game game;

	game.initGame();
	

	while (game.getPlaying())
	{
		game.mainMenu();
	}


	return 0;
}