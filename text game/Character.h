#pragma once
class Character
{
public:
	Character();
	virtual ~Character();

	//Functions
	void initialize(string name);
	void printSheet() const;

	//Accessors
	inline const string& getName() const { return this->name; }
	inline const int& getLevel() const { return this->level; }
	inline const int& getExp() const { return this->exp; }
	inline const int& getExpNext() const { return this->expNext; }
	inline const int& getHp() const { return this->hp; }
	inline const int& getHpMax() const { return this->hpMax; }
	inline const int& getDamageMin() const { return this->damageMin; }
	inline const int& getDamageMax() const { return this->damageMax; }
	inline const int& getDefence() const { return this->defence; }


	//Modifer

private:
	string name;
	int level;
	int exp;
	int expNext;
	int hp;
	int hpMax;
	int damageMin;
	int damageMax;
	int defence;
};

