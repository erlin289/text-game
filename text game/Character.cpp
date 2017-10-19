#include "includes.h"
#include "Character.h"



Character::Character()
{
	this->name = "NONE";
	this->level = 0;
	this->exp = 0;
	this->expNext = 0;
	this->hp = 0;
	this->hpMax = 0;
	this->damageMin = 0;
	this->damageMax = 0;
	this->defence = 0;
}


Character::~Character()
{
}

void Character::initialize(string name)
{
	this->name = name;
	this->level = 1;
	this->exp = 0;
	this->expNext = level*100;
	this->hp = 100;
	this->hpMax = 100;
	this->damageMin = 5;
	this->damageMax = 10;
	this->defence = 10;
}

void Character::printSheet() const
{
	cout << "Name: " << this->name << endl;
	cout << "Level: " << this->level << endl;
	cout << "EXP: " << this->exp << endl;
	cout << "EXP to next level: " << this->expNext << endl;
	cout << "HP: " << this->hp << "/" << this->hpMax << endl;
	cout << "Damage: " << this->damageMin << " ~ " << this->damageMax << endl;
	cout << "Defence: " << this->defence << endl;
}