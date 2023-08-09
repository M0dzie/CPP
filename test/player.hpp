#ifndef PLAYER_HPP
# define PLAYER_HPP
# include <string>

class Player
{
	public:
	void takeDamage(int nbDeal)
	{
	}
	void attack(Player &target)
	{
	}
	void drinkHealthPotion(int healthRecup)
	{
	}
	void switchWeapon(std::string nameOfNewWeapon, int newWeaponDamage)
	{
	}
	bool isAlive()
	{
		return 1;
	}

	private: 
	int life;
	int mana;
	int weaponDamage;
	std::string weapon;
};

#endif