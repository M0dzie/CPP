#include "Player.hpp"

Player::Player()
{
	life = 100;
	mana = 100;
	weapon = "Shit weapon";
	weaponDamage = 10;
	std::cout << "Classic constructor called !" << std::endl;
}

Player::Player(std::string nameWeapon, int weaponDeal)
{
	life = 100;
	mana = 100;
	weapon = nameWeapon;
	weaponDamage = weaponDeal;
	std::cout << "Specific constructor called !" << std::endl;
}

Player::~Player()
{
	std::cout << "Destructor called !" << std::endl;
}

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

bool Player::isAlive() const
{
	return life > 0;
}
