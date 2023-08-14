#include "Weapon.hpp"

Weapon::Weapon()
{
	name = "Shit weapon";
	damage = 10;
}

Weapon::Weapon(std::string nameOfWeapon, int dealing)
{
	name = nameOfWeapon;
	damage = dealing;
}

void Weapon::switchWeapon(std::string nameOfWeapon, int dealing)
{
	name = nameOfWeapon;
	damage = dealing;
}

void Weapon::show() const
{
	std::cout << "Weapon : " << name << "(Damage : " << damage << ")" << std::endl;
}