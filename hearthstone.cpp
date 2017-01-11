#include "card.cpp"
#include <string>
#include <iostream>
#include <vector>
using namespace std;


void printBoard(int currentPlayer, vector<Card> collection)
{
	// loop through all cards in collection, show OTHER PLAYER cards in play then ours
	// then print hand
	cout << "ENEMY FIELD:" << endl;
	
	for(int i=0;i<collection.length();i++)
	{
		if (collection[i].getID == !currentPlayer && collection[i].inPlay() == true)
		{
			cout << collection[i].getName() << " [(" << collection[i].getCost() << ") " << collection[i].getAttack()
			 << "/" << collection[i].getHealth() << " ]" << endl;
		}
	}
	
	cout << endl << "YOUR FIELD:" << endl;
	
	for(int i=0;i<collection.length();i++)
	{
		if (collection[i].getID == currentPlayer && collection[i].inPlay() == true)
		{
			cout << collection[i].getName() << " [(" << collection[i].getCost() << ") " << collection[i].getAttack()
			 << "/" << collection[i].getHealth() << " ]" << endl;
		}	
	}
	
	cout << endl << "YOUR HAND:" << endl;
	
	for(int i=0;i<collection.length();i++)
	{
		int j = 1;
		if (collection[i].getID == currentPlayer && collection[i].inPlay() == false)
		{
			cout << j << ": " << collection[i].getName() << " [(" << collection[i].getCost() << ") " << collection[i].getAttack()
			 << "/" << collection[i].getHealth() << " ]" << endl;
			 j++;
		}	
	}	
	
	// could have overloaded operator to output Card to stream, avoids copy pasting code
	
}

Card draw(int currentPlayer, vector<Card>* collection, vector<Card>* deck)
{
	
}


int main()
{
	// initialize
	bool gameOver = false;
	vector<Card> collection;
	vector<Card> deck;
	vector<Card> graveyard;
	// player 1 draws 3 cards from deck
	// player 2 draws 4 cards and gets a coin from deck
	
	// DECK - another Card vector, draw by searching until finding ID of currentplayer, then swapping with last element,
	// then returning the Card and pop_back to remove it from deck and make deck smaller.
	// Card draw(int currentPlayer, vector<Card>* collection, vector<Card>* deck)
	
	// collection.push_back(all them cards)
	
	// mana starts at 1, turn counter is 1
	
	int manaOne = 0;
	int manaTwo = 0;
	int currentPlayer = 1;
	
	while(gameOver == false)
	{
		// change player turn, wipe screen
		// set summoning sickness to false
		// if currentPlayer ==1, draw from deck1
		
		// draw (add card to large card vector)
		// increment mana if less than 10
		
		// WHILE PROMPT ACTION [
		// print board (is inPlay and corresponding playerid)
		// print hand (is not inPlay and only show own ID)
		// prompt for action ]
		
		/*ACTIONS: ATTACK, 
		select your attacking minion, and then their minion
		IF your minion does not have summoning sickness and is in play AND target is in play, proceed or say can't atk
		to attack: SEARCH FOR CARD WITH MATCHING ID, then with the card thats returned, sample
		
		*/
		
		// card stuff
		/*
		field card vector
		canAttack
		
		
		
		*/
	
		// loop restarts when turn ends
		

		
	}
	
	
	
	
	return 0;
}
