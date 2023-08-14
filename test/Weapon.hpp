#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>

class Weapon
{
	public:
	Weapon();
	Weapon(std::string nameOfWeapon, int dealing);
	void switchWeapon(std::string nameOfWeapon, int dealing);
	void show() const;

	private:
	std::string name;
	int damage;
};

#endif