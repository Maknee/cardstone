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
		if (collection[i].getID == currentPlayer && collection[i].inPlay() == false)
		{
			cout << collection[i].getName() << " [(" << collection[i].getCost() << ") " << collection[i].getAttack()
			 << "/" << collection[i].getHealth() << " ]" << endl;
		}	
	}	
	
	
	
}

int main()
{
	// initialize
	bool gameOver = false;
	vector<Card> collection;
	// player 1 draws 3 cards from deck
	// player 2 draws 4 cards and gets a coin from deck
	
	// collection.push_back(all them cards)
	
	// mana starts at 1, turn counter is 1
	
	
	while(gameOver == false)
	{
		// change player turn
		
		// if currentPlayer ==1, draw from deck1
		
		// draw (add card to large card vector)
		// increment mana if less than 10
		
		// WHILE PROMPT ACTION [
		// print board (is inPlay and corresponding playerid)
		// print hand (is not inPlay and only show own ID)
		// prompt for action ]
		
		// card stuff
		/*
		field card vector
		canAttack
		
		
		
		*/
	
		// loop restarts when turn ends
		

		
	}
	
	
	
	
	return 0;
}