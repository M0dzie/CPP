#include "Player.hpp"

void Player::takeDamage(int nbDeal)
{
	life -= nbDeal;

	if (life < 0)
		life = 0;
}

void Player::attack(Player &target)
{
	target.takeDamage(weaponDamage);
}

void Player::drinkHealthPotion(int healthRecup)
{
	life += healthRecup;

	if (life > 100)
		life = 100;
}

void Player::switchWeapon(std::string nameOfWeapon, int newWeaponDamage)
{
	weapon = nameOfWeapon;
	weaponDamage = newWeaponDamage;
}

bool Player::isAlive()
{
	return life > 0;
}
