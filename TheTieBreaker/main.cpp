#include <iostream>
#include "Player.h"
#include "TheLastOver.h"
using namespace std;

int main()
{
	Player Kirat("Kirat Boli", { 5, 10, 25, 10, 25, 1, 14, 10 });
	Player Nodhi("NS Nodhi", { 5, 15, 15, 10, 20, 1, 19, 15 });
	
	
	Player ADB("DB Vellyers", { 5, 10, 25, 10, 25, 1, 14, 10 });
	Player HMamla("H Mamla", { 10, 15, 15, 10, 20, 1, 19, 10 });

	
	vector<Player> Lengaburu({Kirat,Nodhi});
	vector<Player> Enchai({ADB,HMamla});

		
	TheLastOver firstinning;	
		
	vector<string> fiScoreBoard = { "Lengaburu innings" };
	firstinning.setScoreBoard(fiScoreBoard);

		
	fiScoreBoard = firstinning.simulateSetTarget(Lengaburu);

	TheLastOver* secondinning= new TheLastOver(firstinning.getTarget());

	vector<string> chaseScoreBoard = { "Enchai innings" };
	secondinning->setScoreBoard(chaseScoreBoard);

	chaseScoreBoard = secondinning->simulateChase(Enchai);
		
	firstinning.displayFinalScoreBoard(fiScoreBoard);
	secondinning->displayFinalScoreBoard(chaseScoreBoard);

	
	return 0;
}
