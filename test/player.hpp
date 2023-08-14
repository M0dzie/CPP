#ifndef PLAYER_HPP
# define PLAYER_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class Player
{
	public:
	Player();
	Player(std::string nameWeapon, int weaponDamage);
	~Player();
	void takeDamage(int nbDeal);
	void attack(Player &target);
	void drinkHealthPotion(int healthRecup);
	void switchWeapon(std::string nameOfNewWeapon, int newWeaponDamage);
	bool isAlive() const;

	private:
	int life;
	int mana;
	int weaponDamage;
	std::string weapon;
};

#endif