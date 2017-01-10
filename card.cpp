#include "card.h"
#include <string>
#include <iostream>
using namespace std;

Card::Card() // need a ()?
{
	name_ = "wisp";
	description_ = "nullptr";
	health_ = 1;
	attack_ = 1;
	cost_ = 1;
	playerID_ = 1;
	inPlay_ = false;
	//default WISP
}

Card::Card(string name, string description, int health, int attack, int cost, int id, bool inPlay, bool charge)
{
	name_ = name;
	description_ = description;
	health_ = health;
	attack_ = attack;
	cost_ = cost;
	playerID_ = id;
	inPlay_ = inPlay;
	summoningSickness_ = charge;
}

string Card::getName() const
{
	return name_;
}

string Card::getDescription() const
{
	return description_;
}

int Card::getHealth() const
{
	return health_;
}

int Card::getAttack() const
{
	return attack_;
}

int Card::getCost() const
{
	return cost_;
}

int Card::getID() const
{
	return playerID_;
}

bool Card::getinPlay() const
{
	return inPlay_;
}

bool Card::getsummoningSickness() const
{
	return summoningSickness_;
}

void Card::damage(int amount)
{
	health_ = health_ - amount;
}

void Card::attack(Card * target)
{
	target -> damage(attack_);
	
}