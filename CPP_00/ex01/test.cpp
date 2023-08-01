#include "test.hpp"

int addTwo(int &nb)
{
	return nb += 2;
}

int calculSeconds(int hours, int minutes, int seconds)
{
	int result = 0;

	result = hours * 60 * 60;
	result += minutes * 60;
	result += seconds;
	return (result);
}

int main(int argc, char **argv)
{
	int nb = 4;
	int newNb = addTwo(nb);

	std::cout << "Here's your number : " << nb << std::endl;
	std::cout << "Your new nb is : " << newNb << std::endl;
	std::cout << "Number of seconds : " << calculSeconds(1, 10) << std::endl;
	return (0);
}
