


#ifndef Card_h
#define Card_h

#include <string>
#include <iostream>
using namespace std;

class Card
{
public:
    Card(string name);
    string getName() const;
    int getHealth() const;
	int getAttack() const;
	int getCost() const;
	string getDescription() const;
	
	//value change
	void setName(string ename);
	void setHealth(int ehealth);
	void setAttack(int eattack);
	void setCost(int ecost);
	void setDescription(string edescription);
	
    void damage(int amount);
	void attack(Card * target);
	int playerID() const;
	
	
private:
	string name_;
	string description_;
	int health_;
	int attack_;
	int cost_;
};

#endif /* Card_h */