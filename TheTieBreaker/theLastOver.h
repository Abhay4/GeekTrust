#ifndef THELASTFOUR_H
#define THELASTFOUR_H

#include "Player.h"
#include <vector>
using std::vector;

class TheLastFour
{
private:
	int runsToScore;
	int wicketsLeft;
	int oversRemaining;
	vector<string> scoreBoard;

public:	
	TheLastFour();

	// This funtion sets the number of runs to score
	void setRunsToScore(int runsToScore);

	// This function returns the number of runs to score
	int getRunsToScore() const;

	// This function sets the number of wickets left
	void setWicketsLeft(int wicketsLeft);

	// This function returns the number of wickets left
	int getWicketsLeft() const;

	// This function sets the number of overs remaining
	void setOversRemaining(int oversRemaining);

	// This function gets the number of overs remaining
	int getOverRemaining() const;

	// This function sets the current score board
	void setScoreBoard(vector<string> scoreBoard);

	// This function gets the current score board
	vector<string> getScoreBoard() const;

	// This is main function to display the final score board (summary)
	// of the match. To be called by the main.cpp driver program
	void displayFinalScoreBoard(const vector<string>& finalScoreBoard) const;

	// This is the main function to start simulation of the match based
	// on the given parameters. 
	// Returns the result of the match simulation.
	vector<string> simulateMatch(const vector<Player>& players);
};

#endif