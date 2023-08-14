#include "Player.hpp"

int main(int argc, char **argv)
{
	Player david, goliath("Dat sword", 20);

	goliath.attack(david);
	david.drinkHealthPotion(20);
	goliath.attack(david);
	david.attack(goliath);

	goliath.switchWeapon("Sahrme", 40);
	goliath.attack(david);
	return 0;
}
